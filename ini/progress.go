package main

import (
	"flag"
	"fmt"
	"io"
	"log"
	"os"
	"sort"
	"text/tabwriter"

	"github.com/mewkiz/pkg/errutil"
	"gopkg.in/ini.v1"
)

func main() {
	flag.Parse()
	paths := flag.Args()
	sort.Strings(paths)
	const s = `
| Source path                                                                  | PSX progress             | Windows progress     | Macintosh progress   |
|------------------------------------------------------------------------------|--------------------------|----------------------|----------------------|
`
	const padding = 0
	w := tabwriter.NewWriter(os.Stdout, 0, 0, padding, ' ', 0)
	fmt.Print(s[1:])
	for _, path := range paths {
		if err := progress(w, path); err != nil {
			log.Fatal(err)
		}
	}
	w.Flush()
}

func progress(w io.Writer, path string) error {
	file, err := ini.Load(path)
	if err != nil {
		return errutil.Err(err)
	}
	var npsx, nwin, nmac int
	var total int
	for _, section := range file.Sections() {
		if section.Name() == ini.DEFAULT_SECTION {
			continue
		}
		psx, err := section.GetKey("psx_jp")
		if err != nil {
			return errutil.Err(err)
		}
		win, err := section.GetKey("win_109b")
		if err != nil {
			return errutil.Err(err)
		}
		mac, err := section.GetKey("mac_109")
		if err != nil {
			return errutil.Err(err)
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
	fmt.Fprintf(w, "| [%s](%s) \t| %d%% (%d/%d functions) \t| %d%% (%d/%d functions) \t| %d%% (%d/%d functions) \t|\n", path, path, psxPercent, npsx, total, winPercent, nwin, total, macPercent, nmac, total)
	return nil
}
