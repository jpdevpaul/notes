//+build ignore

package main

import (
	"bytes"
	"flag"
	"fmt"
	"io/ioutil"
	"log"
	"path/filepath"
	"regexp"
	"strings"

	"github.com/pkg/errors"
)

func main() {
	flag.Parse()
	for _, path := range flag.Args() {
		if err := md2cpp(path); err != nil {
			log.Fatalf("%+v", err)
		}
	}
}

var reAddr = regexp.MustCompile("0x[0-9a-fA-F]{6}")

func md2cpp(path string) error {
	input, err := ioutil.ReadFile(path)
	if err != nil {
		return errors.WithStack(err)
	}
	s := string(input)
	output := &bytes.Buffer{}
	defs := strings.Split(s, "\n## ")
	if len(defs) < 2 {
		log.Printf("unable to locate any definitions in %q", path)
		return nil
	}
	for _, def := range defs {
		addr := reAddr.FindString(def)
		if !strings.Contains(def, "\n###") {
			header := fmt.Sprintf("# %s\n", filepath.Base(path))
			if strings.Contains(def, header) {
				// Skip file path header.
				//
				//    # automap.cpp
				continue
			}
			if len(addr) != 0 && def == fmt.Sprintf("%s\n", addr) {
				// function or global variable address known, but has no code block
				// yet.
				fmt.Fprintf(output, "// address: %s\n//\n// TODO: add documentation.\n\n", addr)
				continue
			}
			panic(fmt.Errorf("definition in %q missing symbol name header; %q", path, def))
		}
		// strip Markdown code block header.
		pos := strings.Index(def, "```c\n")
		if pos == -1 {
			panic(fmt.Errorf("unable to locate code block header for %q", addr))
		}
		pos += len("```c\n")
		def = def[pos:]
		pos = strings.Index(def, "```\n")
		if pos == -1 {
			panic(fmt.Errorf("unable to locate code block footer for %q", addr))
		}
		if len(def[pos:]) > len("```\n") {
			log.Printf("suffix of %s in %s: %s", addr, path, def[pos+len("```\n"):])
		}
		def = def[:pos]
		// strip Markdown code block footer.
		fmt.Fprintf(output, "// address: %s\n//\n%s\n", addr, def)
	}
	if err := ioutil.WriteFile(path, output.Bytes(), 0644); err != nil {
		return errors.WithStack(err)
	}
	return nil
}
