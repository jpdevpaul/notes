# Functions

Each function has been categorised based on their original source file, as summarised by the table below. The *progress* column tracks the percentage of functions within a given source file that have been documented.

| Source File                      | Start Address | End Address | Progress                 |
|----------------------------------|---------------|-------------|--------------------------|
| _crt.cpp                         | `0x401000`    | `0x401029`  | N/A                      |
| [appfat.cpp](appfat.cpp)         | `0x40102A`    | `0x401DA3`  | 100% (19/19 functions)   |
| [automap.cpp](automap.cpp)       | `0x401DA4`    | `0x40311A`  | 12% (2/16 functions)     |
| [capture.cpp](capture.cpp)       | `0x40311B`    | `0x4034D8`  | 14% (1/7 functions)      |
| [codec.cpp](codec.cpp)           | `0x4034D9`    | `0x4037D3`  | 100% (5/5 functions)     |
| [control.cpp](control.cpp)       | `0x4037D4`    | `0x407409`  | 24% (16/65 functions)    |
| [cursor.cpp](cursor.cpp)         | `0x40740A`    | `0x4084A5`  | 100% (9/9 functions)     |
| [dead.cpp](dead.cpp)             | `0x4084A6`    | `0x4086F3`  | 0% (0/3 functions)       |
| [debug.cpp](debug.cpp)           | `0x4086F4`    | `0x4087B0`  | 66% (2/3 functions)      |
| [diablo.cpp](diablo.cpp)         | `0x4087B1`    | `0x40ACAC`  | 42% (15/35 functions)    |
| [doom.cpp](doom.cpp)             | `0x40ACAD`    | `0x40ADD5`  | 14% (1/7 functions)      |
| [drlg_l1.cpp](drlg_l1.cpp)       | `0x40ADD6`    | `0x40D356`  | 100% (38/38 functions)   |
| [drlg_l2.cpp](drlg_l2.cpp)       | `0x40D357`    | `0x40FF80`  | 0% (0/35 functions)      |
| [drlg_l3.cpp](drlg_l3.cpp)       | `0x40FF81`    | `0x412654`  | 0% (0/34 functions)      |
| [drlg_l4.cpp](drlg_l4.cpp)       | `0x412655`    | `0x415097`  | 0% (0/35 functions)      |
| [dthread.cpp](dthread.cpp)       | `0x415098`    | `0x415361`  | 9% (1/11 functions)      |
| [dx.cpp](dx.cpp)                 | `0x415362`    | `0x4158A8`  | 17% (3/17 functions)     |
| [effects.cpp](effects.cpp)       | `0x4158A9`    | `0x415F42`  | 4% (1/21 functions)      |
| [encrypt.cpp](encrypt.cpp)       | `0x415F43`    | `0x4161FB`  | 25% (2/8 functions)      |
| [engine.cpp](engine.cpp)         | `0x4161FC`    | `0x41804D`  | 63% (36/57 functions)    |
| [error.cpp](error.cpp)           | `0x41804E`    | `0x4182AC`  | 33% (1/3 functions)      |
| [exception.cpp](exception.cpp)   | `0x4182AD`    | `0x418865`  | 0% (0/12 functions)      |
| [gamemenu.cpp](gamemenu.cpp)     | `0x418866`    | `0x418C8A`  | 0% (0/23 functions)      |
| [gendung.cpp](gendung.cpp)       | `0x418C8B`    | `0x419E8A`  | 31% (7/22 functions)     |
| [gmenu.cpp](gmenu.cpp)           | `0x419E8B`    | `0x41A552`  | 10% (2/20 functions)     |
| [help.cpp](help.cpp)             | `0x41A553`    | `0x41A7B2`  | 16% (1/6 functions)      |
| [init.cpp](init.cpp)             | `0x41A7B3`    | `0x41B18F`  | 47% (9/19 functions)     |
| [interfac.cpp](interfac.cpp)     | `0x41B190`    | `0x41B813`  | 22% (2/9 functions)      |
| [inv.cpp](inv.cpp)               | `0x41B814`    | `0x41F095`  | 10% (4/40 functions)     |
| [items.cpp](items.cpp)           | `0x41F096`    | `0x425442`  | 9% (10/110 functions)    |
| [lighting.cpp](lighting.cpp)     | `0x425443`    | `0x426563`  | 0% (0/24 functions)      |
| [loadsave.cpp](loadsave.cpp)     | `0x426564`    | `0x4279F1`  | 34% (11/32 functions)    |
| [log.cpp](log.cpp)               | `0x4279F2`    | `0x427E0D`  | 0% (0/11 functions)      |
| [mainmenu.cpp](mainmenu.cpp)     | `0x427E0E`    | `0x428055`  | 0% (0/10 functions)      |
| [minitext.cpp](minitext.cpp)     | `0x428056`    | `0x4283BF`  | 16% (1/6 functions)      |
| [missiles.cpp](missiles.cpp)     | `0x4283C0`    | `0x430FDE`  | 0% (1/133 functions)     |
| [monster.cpp](monster.cpp)       | `0x430FDF`    | `0x43AD32`  | 0% (0/147 functions)     |
| [movie.cpp](movie.cpp)           | `0x43AD33`    | `0x43AE8F`  | 0% (0/4 functions)       |
| [mpqapi.cpp](mpqapi.cpp)         | `0x43AE90`    | `0x43BBA3`  | 10% (3/29 functions)     |
| [msg.cpp](msg.cpp)               | `0x43BBA4`    | `0x43F848`  | 0% (1/133 functions)     |
| [msgcmd.cpp](msgcmd.cpp)         | `0x43F849`    | `0x43FAC3`  | 0% (0/18 functions)      |
| [multi.cpp](multi.cpp)           | `0x43FAC4`    | `0x440DAD`  | 2% (1/38 functions)      |
| [nthread.cpp](nthread.cpp)       | `0x440DAE`    | `0x44121C`  | 6% (1/15 functions)      |
| [objects.cpp](objects.cpp)       | `0x44121D`    | `0x448754`  | 0% (0/131 functions)     |
| [hero.cpp](hero.cpp)             | `0x448755`    | `0x448DF4`  | 0% (0/7 functions)       |
| [palette.cpp](palette.cpp)       | `0x448DF5`    | `0x4493D3`  | 0% (0/22 functions)      |
| [path.cpp](path.cpp)             | `0x4493D4`    | `0x4498EB`  | 0% (0/14 functions)      |
| [pfile.cpp](pfile.cpp)           | `0x4498EC`    | `0x44A8E5`  | 21% (8/38 functions)     |
| [player.cpp](player.cpp)         | `0x44A8E6`    | `0x450D32`  | 3% (3/92 functions)      |
| [plrmsg.cpp](plrmsg.cpp)         | `0x450D33`    | `0x450FFD`  | 12% (1/8 functions)      |
| [portal.cpp](portal.cpp)         | `0x450FFE`    | `0x45138D`  | 7% (1/13 functions)      |
| [quests.cpp](quests.cpp)         | `0x45138E`    | `0x452830`  | 44% (11/25 functions)    |
| [restricted.cpp](restricted.cpp) | `0x452831`    | `0x452974`  | 33% (1/3 functions)      |
| [scrollrt.cpp](scrollrt.cpp)     | `0x452975`    | `0x456624`  | 9% (3/31 functions)      |
| [setmaps.cpp](setmaps.cpp)       | `0x456625`    | `0x456A15`  | 0% (0/6 functions)       |
| [sha1.cpp](sha1.cpp)             | `0x456A16`    | `0x456CBA`  | 100% (6/6 functions)     |
| [sound.cpp](sound.cpp)           | `0x456CBB`    | `0x45744D`  | 18% (4/22 functions)     |
| [spells.cpp](spells.cpp)         | `0x45744E`    | `0x457A00`  | 42% (3/7 functions)      |
| [stores.cpp](stores.cpp)         | `0x457A01`    | `0x45C198`  | 58% (56/95 functions)    |
| [sync.cpp](sync.cpp)             | `0x45C199`    | `0x45C86F`  | 0% (0/9 functions)       |
| [themes.cpp](themes.cpp)         | `0x45C870`    | `0x45E08B`  | 0% (0/31 functions)      |
| [tmsg.cpp](tmsg.cpp)             | `0x45E08C`    | `0x45E150`  | 33% (1/3 functions)      |
| [town.cpp](town.cpp)             | `0x45E151`    | `0x46019A`  | 15% (3/19 functions)     |
| [towners.cpp](towners.cpp)       | `0x46019B`    | `0x4618A4`  | 100% (33/33 functions)   |
| [track.cpp](track.cpp)           | `0x4618A5`    | `0x4619A6`  | 0% (0/5 functions)       |
| [trigs.cpp](trigs.cpp)           | `0x4619A7`    | `0x462C6C`  | 4% (1/21 functions)      |
| [wave.cpp](wave.cpp)             | `0x462C6D`    | `0x46305F`  | 0% (0/18 functions)      |
| [world.cpp](world.cpp)           | `0x463060`    | `0x469719`  | 0% (0/7 functions)       |
| _crt.cpp                         | `0x46971A`    | `0x47746F`  | N/A                      |
| pkware.cpp                       | `0x477470`    | `0x478FFF`  | N/A                      |

## Notes

The mapping between source file names and address ranges has been inferred by cross-referencing information from the v1.09b release of Diablo 1 against the [debug release](http://diablo1.se/notes/debug.html) and the [Japanese Playstation 1 release](https://github.com/sanctuary/notes/issues/1) of Diablo 1. A majority of the original source file names (55/67) were discovered from [assert strings](http://diablo1.se/notes/debug.html#assert-strings) in the debug release, while some (1/67) were discovered from section names in the Japanese Playstation 1 release of Diablo 1. The remaining 11 source file names have been inferred by categorising the behaviour of their respective functions, and by exploiting the fact that the source files have been linked together in alphabetical order.

The following source file names are known to be correct based on assert strings in the debug release: `appfat.cpp`, `automap.cpp`, `capture.cpp`, `codec.cpp`, `control.cpp`, `cursor.cpp`, `dead.cpp`, `debug.cpp`, `diablo.cpp`, `doom.cpp`, `drlg_l1.cpp`, `drlg_l2.cpp`, `drlg_l3.cpp`, `drlg_l4.cpp`, `dthread.cpp`, `dx.cpp`, `effects.cpp`, `encrypt.cpp`, `engine.cpp`, `error.cpp`, `gamemenu.cpp`, `gendung.cpp`, `gmenu.cpp`, `init.cpp`, `interfac.cpp`, `inv.cpp`, `items.cpp`, `lighting.cpp`, `loadsave.cpp`, `minitext.cpp`, `missiles.cpp`, `monster.cpp`, `movie.cpp`, `mpqapi.cpp`, `msg.cpp`, `multi.cpp`, `nthread.cpp`, `objects.cpp`, `palette.cpp`, `pfile.cpp`, `player.cpp`, `plrmsg.cpp`, `portal.cpp`, `quests.cpp`, `scrollrt.cpp`, `setmaps.cpp`, `sound.cpp`, `stores.cpp`, `sync.cpp`, `themes.cpp`, `tmsg.cpp`, `town.cpp`, `towners.cpp`, `trigs.cpp` and `wave.cpp`.

The following source file names are known to be correct based on section names in the Japanese Playstation 1 release: `spells.cpp`.

The following source file names are believed to be correct based on educated guesses: `exception.cpp`, `help.cpp`, `log.cpp`, `mainmenu.cpp`, `hero.cpp`, `path.cpp` and `sha1.cpp`.

The following source file names are most likely incorrect, but they are the result of best efforts attempts at identifying source file names which describe the behaviour of their respective functions while satisfying to the alphabetic linking order constraint: `msgcmd.cpp`, `restricted.cpp`, `track.cpp` and `world.cpp`. *Any suggestions and ideas to further improve these names would be hugely appreciated!*

The `_crt.cpp` source file name is a pseudo-file name used for functions related to the C and C++ run-time.

The `pkware.cpp` source file contains the PKWARE Data Compression Library.
