package main

import (
	"bytes"
	"flag"
	"fmt"
	"io"
	"log"
	"sort"
	"strings"
	"text/tabwriter"

	"github.com/mewkiz/pkg/errutil"
	"gopkg.in/ini.v1"
)

func main() {
	flag.Parse()
	paths := flag.Args()
	sort.Strings(paths)
	buf := &bytes.Buffer{}
	const padding = 0
	w := tabwriter.NewWriter(buf, 0, 0, padding, ' ', 0)
	fmt.Fprintln(w, "| Source path \t| PSX progress \t| Windows progress \t| Macintosh progress \t|\t")
	fmt.Fprintln(w, "|-\t|-\t|-\t|\t|\t")
	var npsxtotal, nwintotal, nmactotal, total int
	for _, path := range paths {
		npsx, nwin, nmac, n, err := progress(w, path)
		if err != nil {
			log.Fatal(err)
		}
		npsxtotal += npsx
		nwintotal += nwin
		nmactotal += nmac
		total += n
	}
	psxPercent := int(100 * (float64(npsxtotal) / float64(total)))
	winPercent := int(100 * (float64(nwintotal) / float64(total)))
	macPercent := int(100 * (float64(nmactotal) / float64(total)))
	fmt.Fprintf(w, "| Total \t| %d%% (%d/%d functions) \t| %d%% (%d/%d functions) \t| %d%% (%d/%d functions) \t|\t\n", psxPercent, npsxtotal, total, winPercent, nwintotal, total, macPercent, nmactotal, total)
	w.Flush()
	fmt.Println(postprocess(buf.String()))
}

func postprocess(s string) string {
	before := strings.Split(s, "\n")
	// Ignore empty trailing lines.
	for i := len(before) - 1; i >= 0; i-- {
		if len(before[i]) == 0 {
			before = before[:i]
		}
	}
	// Before:
	//    | Source path                                                          | PSX progress               | Windows progress      | Macintosh progress    |
	//    |-                                                                     |-                           |-                      |-                      |
	//
	// After:
	//    | Source path                                                          | PSX progress               | Windows progress      | Macintosh progress    |
	//    |----------------------------------------------------------------------|----------------------------|-----------------------|-----------------------|
	before[1] = strings.Replace(before[1], " ", "-", -1)
	// Before:
	//    | Source path                                                          | PSX progress               | Windows progress      | Macintosh progress    |
	//    |----------------------------------------------------------------------|----------------------------|-----------------------|-----------------------|
	//    | [glibdev/source/gal.c](diabpsx/glibdev/source/gal.c)                 | 100% (70/70 functions)     | 0% (0/70 functions)   | 0% (0/70 functions)   |
	//    ...
	//    | Total                                                                | 100% (2688/2688 functions) | 0% (0/2688 functions) | 0% (0/2688 functions) |
	//
	// After:
	//    | Source path                                                          | PSX progress               | Windows progress      | Macintosh progress    |
	//    |----------------------------------------------------------------------|----------------------------|-----------------------|-----------------------|
	//    | Total                                                                | 100% (2688/2688 functions) | 0% (0/2688 functions) | 0% (0/2688 functions) |
	//    ...
	//    | [glibdev/source/gal.c](diabpsx/glibdev/source/gal.c)                 | 100% (70/70 functions)     | 0% (0/70 functions)   | 0% (0/70 functions)   |
	after := append(before[0:2:2], before[len(before)-1])
	after = append(after, before[2:len(before)-1]...)
	return strings.Join(after, "\n")
}

func progress(w io.Writer, path string) (npsx, nwin, nmac, total int, err error) {
	file, err := ini.Load(path)
	if err != nil {
		return 0, 0, 0, 0, errutil.Err(err)
	}
	for _, section := range file.Sections() {
		if section.Name() == ini.DEFAULT_SECTION {
			continue
		}
		psx, err := section.GetKey("psx_jp")
		if err != nil {
			return 0, 0, 0, 0, errutil.Err(err)
		}
		win, err := section.GetKey("win_109b")
		if err != nil {
			return 0, 0, 0, 0, errutil.Err(err)
		}
		mac, err := section.GetKey("mac_109")
		if err != nil {
			return 0, 0, 0, 0, errutil.Err(err)
		}
		if hasPSX := len(psx.Value()) > 0; hasPSX {
			npsx++
		}
		if hasWin := len(win.Value()) > 0; hasWin {
			nwin++
		}
		if hasMac := len(mac.Value()) > 0; hasMac {
			nmac++
		}
		total++
	}
	psxPercent := int(100 * (float64(npsx) / float64(total)))
	winPercent := int(100 * (float64(nwin) / float64(total)))
	macPercent := int(100 * (float64(nmac) / float64(total)))
	shortPath := path[len("diabpsx/"):]
	fmt.Fprintf(w, "| [%s](%s) \t| %d%% (%d/%d functions) \t| %d%% (%d/%d functions) \t| %d%% (%d/%d functions) \t|\t\n", shortPath, path, psxPercent, npsx, total, winPercent, nwin, total, macPercent, nmac, total)
	return npsx, nwin, nmac, total, nil
}
