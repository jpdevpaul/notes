# Functions

Each function has been categorised based on their original source file, as summarised by the table below. The *progress* column tracks the percentage of functions within a given source file that has been documented.

| Source File                | Start Address | End Address | Progress                                                  |
|----------------------------|---------------|-------------|-----------------------------------------------------------|
| _crt.cpp                   | `0x401000`    | `0x401029`  | N/A                                                       |
| [appfat.cpp](appfat.h)     | `0x40102A`    | `0x401DA3`  | ![100%](http://progressed.io/bar/100 "(19/19 functions)") |
| [automap.cpp](automap.h)   | `0x401DA4`    | `0x40311A`  | ![100%](http://progressed.io/bar/100 "(16/16 functions)") |
| [capture.cpp](capture.h)   | `0x40311B`    | `0x4034D8`  | ![100%](http://progressed.io/bar/100 "(7/7 functions)")   |
| [codec.cpp](codec.h)       | `0x4034D9`    | `0x4037D3`  | ![100%](http://progressed.io/bar/100 "(5/5 functions)")   |
| [control.cpp](control.h)   | `0x4037D4`    | `0x407409`  | ![30%](http://progressed.io/bar/30 "(20/65 functions)")   |
| [cursor.cpp](cursor.h)     | `0x40740A`    | `0x4084A5`  | ![100%](http://progressed.io/bar/100 "(9/9 functions)")   |
| [dead.cpp](dead.h)         | `0x4084A6`    | `0x4086F3`  | ![100%](http://progressed.io/bar/100 "(3/3 functions)")   |
| [debug.cpp](debug.h)       | `0x4086F4`    | `0x4087B0`  | ![100%](http://progressed.io/bar/100 "(3/3 functions)")   |
| [diablo.cpp](diablo.h)     | `0x4087B1`    | `0x40ACAC`  | ![50%](http://progressed.io/bar/50 "(18/36 functions)")   |
| [doom.cpp](doom.h)         | `0x40ACAD`    | `0x40ADD5`  | ![100%](http://progressed.io/bar/100 "(7/7 functions)")   |
| [drlg_l1.cpp](drlg_l1.h)   | `0x40ADD6`    | `0x40D356`  | ![100%](http://progressed.io/bar/100 "(38/38 functions)") |
| [drlg_l2.cpp](drlg_l2.h)   | `0x40D357`    | `0x40FF80`  | ![51%](http://progressed.io/bar/51 "(18/35 functions)")   |
| [drlg_l3.cpp](drlg_l3.h)   | `0x40FF81`    | `0x412654`  | ![5%](http://progressed.io/bar/5 "(2/34 functions)")      |
| [drlg_l4.cpp](drlg_l4.h)   | `0x412655`    | `0x415097`  | ![2%](http://progressed.io/bar/2 "(1/35 functions)")      |
| [dthread.cpp](dthread.h)   | `0x415098`    | `0x415361`  | ![100%](http://progressed.io/bar/100 "(11/11 functions)") |
| [dx.cpp](dx.h)             | `0x415362`    | `0x4158A8`  | ![100%](http://progressed.io/bar/100 "(17/17 functions)") |
| [effects.cpp](effects.h)   | `0x4158A9`    | `0x415F42`  | ![22%](http://progressed.io/bar/22 "(5/22 functions)")    |
| [encrypt.cpp](encrypt.h)   | `0x415F43`    | `0x4161FB`  | ![100%](http://progressed.io/bar/100 "(8/8 functions)")   |
| [engine.cpp](engine.h)     | `0x4161FC`    | `0x41804D`  | ![66%](http://progressed.io/bar/66 "(38/57 functions)")   |
| [error.cpp](error.h)       | `0x41804E`    | `0x4182AC`  | ![100%](http://progressed.io/bar/100 "(3/3 functions)")   |
| [fault.cpp](fault.h)       | `0x4182AD`    | `0x418865`  | ![58%](http://progressed.io/bar/58 "(7/12 functions)")    |
| [gamemenu.cpp](gamemenu.h) | `0x418866`    | `0x418C8A`  | ![0%](http://progressed.io/bar/0 "(0/23 functions)")      |
| [gendung.cpp](gendung.h)   | `0x418C8B`    | `0x419E8A`  | ![36%](http://progressed.io/bar/36 "(8/22 functions)")    |
| [gmenu.cpp](gmenu.h)       | `0x419E8B`    | `0x41A552`  | ![20%](http://progressed.io/bar/20 "(4/20 functions)")    |
| [help.cpp](help.h)         | `0x41A553`    | `0x41A7B2`  | ![100%](http://progressed.io/bar/100 "(6/6 functions)")   |
| [init.cpp](init.h)         | `0x41A7B3`    | `0x41B18F`  | ![63%](http://progressed.io/bar/63 "(12/19 functions)")   |
| [interfac.cpp](interfac.h) | `0x41B190`    | `0x41B813`  | ![100%](http://progressed.io/bar/100 "(9/9 functions)")   |
| [inv.cpp](inv.h)           | `0x41B814`    | `0x41F095`  | ![10%](http://progressed.io/bar/10 "(4/40 functions)")    |
| [items.cpp](items.h)       | `0x41F096`    | `0x425442`  | ![12%](http://progressed.io/bar/12 "(14/110 functions)")  |
| [lighting.cpp](lighting.h) | `0x425443`    | `0x426563`  | ![0%](http://progressed.io/bar/0 "(0/24 functions)")      |
| [loadsave.cpp](loadsave.h) | `0x426564`    | `0x4279F1`  | ![34%](http://progressed.io/bar/34 "(11/32 functions)")   |
| [log.cpp](log.h)           | `0x4279F2`    | `0x427E0D`  | ![100%](http://progressed.io/bar/100 "(11/11 functions)") |
| [mainmenu.cpp](mainmenu.h) | `0x427E0E`    | `0x428055`  | ![30%](http://progressed.io/bar/30 "(3/10 functions)")    |
| [minitext.cpp](minitext.h) | `0x428056`    | `0x4283BF`  | ![100%](http://progressed.io/bar/100 "(6/6 functions)")   |
| [missiles.cpp](missiles.h) | `0x4283C0`    | `0x430FDE`  | ![2%](http://progressed.io/bar/2 "(3/133 functions)")     |
| [monster.cpp](monster.h)   | `0x430FDF`    | `0x43AD32`  | ![2%](http://progressed.io/bar/2 "(3/147 functions)")     |
| [movie.cpp](movie.h)       | `0x43AD33`    | `0x43AE8F`  | ![100%](http://progressed.io/bar/100 "(4/4 functions)")   |
| [mpqapi.cpp](mpqapi.h)     | `0x43AE90`    | `0x43BBA3`  | ![100%](http://progressed.io/bar/100 "(29/29 functions)") |
| [msg.cpp](msg.h)           | `0x43BBA4`    | `0x43F848`  | ![19%](http://progressed.io/bar/19 "(26/133 functions)")  |
| [msgcmd.cpp](msgcmd.h)     | `0x43F849`    | `0x43FAC3`  | ![16%](http://progressed.io/bar/16 "(3/18 functions)")    |
| [multi.cpp](multi.h)       | `0x43FAC4`    | `0x440DAD`  | ![7%](http://progressed.io/bar/7 "(3/38 functions)")      |
| [nthread.cpp](nthread.h)   | `0x440DAE`    | `0x44121C`  | ![100%](http://progressed.io/bar/100 "(15/15 functions)") |
| [objects.cpp](objects.h)   | `0x44121D`    | `0x448754`  | ![5%](http://progressed.io/bar/5 "(7/131 functions)")     |
| [pack.cpp](pack.h)         | `0x448755`    | `0x448DF4`  | ![100%](http://progressed.io/bar/100 "(7/7 functions)")   |
| [palette.cpp](palette.h)   | `0x448DF5`    | `0x4493D3`  | ![100%](http://progressed.io/bar/100 "(22/22 functions)") |
| [path.cpp](path.h)         | `0x4493D4`    | `0x4498EB`  | ![35%](http://progressed.io/bar/35 "(5/14 functions)")    |
| [pfile.cpp](pfile.h)       | `0x4498EC`    | `0x44A8E5`  | ![100%](http://progressed.io/bar/100 "(38/38 functions)") |
| [player.cpp](player.h)     | `0x44A8E6`    | `0x450D32`  | ![5%](http://progressed.io/bar/5 "(5/92 functions)")      |
| [plrmsg.cpp](plrmsg.h)     | `0x450D33`    | `0x450FFD`  | ![12%](http://progressed.io/bar/12 "(1/8 functions)")     |
| [portal.cpp](portal.h)     | `0x450FFE`    | `0x45138D`  | ![7%](http://progressed.io/bar/7 "(1/13 functions)")      |
| [quests.cpp](quests.h)     | `0x45138E`    | `0x452830`  | ![48%](http://progressed.io/bar/48 "(12/25 functions)")   |
| [restrict.cpp](restrict.h) | `0x452831`    | `0x452974`  | ![100%](http://progressed.io/bar/100 "(3/3 functions)")   |
| [scrollrt.cpp](scrollrt.h) | `0x452975`    | `0x456624`  | ![16%](http://progressed.io/bar/16 "(5/31 functions)")    |
| [setmaps.cpp](setmaps.h)   | `0x456625`    | `0x456A15`  | ![100%](http://progressed.io/bar/100 "(6/6 functions)")   |
| [sha1.cpp](sha1.h)         | `0x456A16`    | `0x456CBA`  | ![100%](http://progressed.io/bar/100 "(6/6 functions)")   |
| [sound.cpp](sound.h)       | `0x456CBB`    | `0x45744D`  | ![100%](http://progressed.io/bar/100 "(22/22 functions)") |
| [spells.cpp](spells.h)     | `0x45744E`    | `0x457A00`  | ![100%](http://progressed.io/bar/100 "(7/7 functions)")   |
| [stores.cpp](stores.h)     | `0x457A01`    | `0x45C198`  | ![67%](http://progressed.io/bar/67 "(64/95 functions)")   |
| [sync.cpp](sync.h)         | `0x45C199`    | `0x45C86F`  | ![0%](http://progressed.io/bar/0 "(0/9 functions)")       |
| [themes.cpp](themes.h)     | `0x45C870`    | `0x45E08B`  | ![67%](http://progressed.io/bar/67 "(21/31 functions)")   |
| [tmsg.cpp](tmsg.h)         | `0x45E08C`    | `0x45E150`  | ![100%](http://progressed.io/bar/100 "(3/3 functions)")   |
| [town.cpp](town.h)         | `0x45E151`    | `0x46019A`  | ![15%](http://progressed.io/bar/15 "(3/19 functions)")    |
| [towners.cpp](towners.h)   | `0x46019B`    | `0x4618A4`  | ![100%](http://progressed.io/bar/100 "(33/33 functions)") |
| [track.cpp](track.h)       | `0x4618A5`    | `0x4619A6`  | ![100%](http://progressed.io/bar/100 "(5/5 functions)")   |
| [trigs.cpp](trigs.h)       | `0x4619A7`    | `0x462C6C`  | ![100%](http://progressed.io/bar/100 "(21/21 functions)") |
| [wave.cpp](wave.h)         | `0x462C6D`    | `0x46305F`  | ![11%](http://progressed.io/bar/11 "(2/18 functions)")    |
| [render.cpp](render.h)     | `0x463060`    | `0x469719`  | ![0%](http://progressed.io/bar/0 "(0/7 functions)")       |
| _crt.cpp                   | `0x46971A`    | `0x47746F`  | N/A                                                       |
| pkware.cpp                 | `0x477470`    | `0x478FFF`  | N/A                                                       |

## Notes

The mapping between source file names and address ranges has been inferred by cross-referencing information from the v1.09b release of Diablo 1 against the [debug release](http://diablo1.se/notes/debug.html) and the [Japanese Playstation 1 release](https://github.com/sanctuary/notes/issues/1) of Diablo 1. A majority of the original source file names (55/67) were discovered from [assert strings](http://diablo1.se/notes/debug.html#assert-strings) in the debug release, while some (1/67) were discovered from section names in the Japanese Playstation 1 release of Diablo 1. The remaining 11 source file names have been inferred by categorising the behaviour of their respective functions, and by exploiting the fact that the source files have been linked together in alphabetical order.

The following source file names are known to be correct based on assert strings in the debug release: `appfat.cpp`, `automap.cpp`, `capture.cpp`, `codec.cpp`, `control.cpp`, `cursor.cpp`, `dead.cpp`, `debug.cpp`, `diablo.cpp`, `doom.cpp`, `drlg_l1.cpp`, `drlg_l2.cpp`, `drlg_l3.cpp`, `drlg_l4.cpp`, `dthread.cpp`, `dx.cpp`, `effects.cpp`, `encrypt.cpp`, `engine.cpp`, `error.cpp`, `gamemenu.cpp`, `gendung.cpp`, `gmenu.cpp`, `init.cpp`, `interfac.cpp`, `inv.cpp`, `items.cpp`, `lighting.cpp`, `loadsave.cpp`, `minitext.cpp`, `missiles.cpp`, `monster.cpp`, `movie.cpp`, `mpqapi.cpp`, `msg.cpp`, `multi.cpp`, `nthread.cpp`, `objects.cpp`, `palette.cpp`, `pfile.cpp`, `player.cpp`, `plrmsg.cpp`, `portal.cpp`, `quests.cpp`, `scrollrt.cpp`, `setmaps.cpp`, `sound.cpp`, `stores.cpp`, `sync.cpp`, `themes.cpp`, `tmsg.cpp`, `town.cpp`, `towners.cpp`, `trigs.cpp` and `wave.cpp`.

The following source file names are known to be correct based on section names in the Japanese Playstation 1 release: `spells.cpp`.

The following source file names are known to be correct based on section names in the earliest known release on Playstation 1 (codeword ~unknown~<sup>[1](#codeword_unknown)</sup>): `mainmenu.cpp`.

The following source file names are known to be correct based on debug information in the 1997-12-08 Alpha release on Playstation 1 (codeword *Easy as Pie*): `help.cpp`, `path.cpp` and `track.cpp`.

The following source file names are known to be correct based on assert strings in Diablo 2: `fault.cpp`.

The following source file names are believed to be correct based on the alphabetic linking order constraint and the function declarations (`PackItem` and `PackPlayer`) inferred from the symbol debug information of the Japanese Playstation 1 release: `pack.cpp`.

The following source file names are believed to be correct based on the alphabetic linking order constraint as inferred from the 1.01 release of Hellfire: `render.cpp`.

The following source file names are believed to be correct based on educated guesses: `log.cpp` and `sha1.cpp`.

The following source file names are most likely incorrect, but they are the result of best efforts attempts at identifying source file names which describe the behaviour of their respective functions while satisfying to the alphabetic linking order constraint: `msgcmd.cpp` and `restrict.cpp`. *Any suggestions and ideas to further improve these names would be hugely appreciated!*

The `_crt.cpp` source file name is a pseudo-file name used for functions related to the C and C++ run-time.

The `pkware.cpp` source file contains the PKWARE Data Compression Library.

---

<a name="codeword_unknown">1</a>: sha1sum of `DIABPSX.MAP`: `5f3c15692e8c591acbe9d6754d152246b7817e53`.
