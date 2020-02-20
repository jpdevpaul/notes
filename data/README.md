# Global Variables (read-write)

Each global variable in the data section has been categorised based on their original source file, as summarised by the table below.

| Source File                | Start Address | End Address | Progress                                                     |
|----------------------------|---------------|-------------|--------------------------------------------------------------|
| _crt.cpp                   | `0x483000`    | `0x4830B7`  | N/A                                                          |
| [appfat.cpp](appfat.h)     | `0x4830B8`    | `0x483B0F`  | ![100%](https://progress-bar.dev/100/ "(2648/2648 bytes)")   |
| [automap.cpp](automap.h)   | `0x483B10`    | `0x483B8F`  | ![100%](https://progress-bar.dev/100/ "(128/128 bytes)")     |
| [codec.cpp](codec.h)       | `0x483B90`    | `0x483BAB`  | ![100%](https://progress-bar.dev/100/ "(28/28 bytes)")       |
| pkware.cpp                 | `0x483BAC`    | `0x483C2B`  | N/A                                                          |
| [control.cpp](control.h)   | `0x483C2C`    | `0x48424F`  | ![100%](https://progress-bar.dev/100/ "(1572/1572 bytes)")   |
| [cursor.cpp](cursor.h)     | `0x484250`    | `0x4842A7`  | ![100%](https://progress-bar.dev/100/ "(88/88 bytes)")       |
| [debug.cpp](debug.h)       | `0x4842A8`    | `0x4842E3`  | ![100%](https://progress-bar.dev/100/ "(60/60 bytes)")       |
| pkware.cpp                 | `0x4842E4`    | `0x484363`  | N/A                                                          |
| [diablo.cpp](diablo.h)     | `0x484364`    | `0x4846AF`  | ![100%](https://progress-bar.dev/100/ "(844/844 bytes)")     |
| [doom.cpp](doom.h)         | `0x4846B0`    | `0x4846F7`  | ![100%](https://progress-bar.dev/100/ "(72/72 bytes)")       |
| pkware.cpp                 | `0x4846F8`    | `0x484777`  | N/A                                                          |
| [drlg_l1.cpp](drlg_l1.h)   | `0x484778`    | `0x4847D7`  | ![100%](https://progress-bar.dev/100/ "(96/96 bytes)")       |
| pkware.cpp                 | `0x4847D8`    | `0x484857`  | N/A                                                          |
| [drlg_l2.cpp](drlg_l2.h)   | `0x484858`    | `0x48613B`  | ![100%](https://progress-bar.dev/100/ "(6372/6372 bytes)")   |
| pkware.cpp                 | `0x48613C`    | `0x4861BB`  | N/A                                                          |
| [drlg_l4.cpp](drlg_l4.h)   | `0x4861BC`    | `0x4862AF`  | ![100%](https://progress-bar.dev/100/ "(244/244 bytes)")     |
| [dthread.cpp](dthread.h)   | `0x4862B0`    | `0x4862F3`  | ![100%](https://progress-bar.dev/100/ "(68/68 bytes)")       |
| [dx.cpp](dx.h)             | `0x4862F4`    | `0x48636F`  | ![100%](https://progress-bar.dev/100/ "(124/124 bytes)")     |
| [effects.cpp](effects.h)   | `0x486370`    | `0x48D6EF`  | ![100%](https://progress-bar.dev/100/ "(29568/29568 bytes)") |
| pkware.cpp                 | `0x48D6F0`    | `0x48D76F`  | N/A                                                          |
| [engine.cpp](engine.h)     | `0x48D770`    | `0x48D7C3`  | ![100%](https://progress-bar.dev/100/ "(84/84 bytes)")       |
| [error.cpp](error.h)       | `0x48D7C4`    | `0x48DE7F`  | ![100%](https://progress-bar.dev/100/ "(1724/1724 bytes)")   |
| [fault.cpp](fault.h)       | `0x48DE80`    | `0x48E1B7`  | ![100%](https://progress-bar.dev/100/ "(824/824 bytes)")     |
| [gamemenu.cpp](gamemenu.h) | `0x48E1B8`    | `0x48E357`  | ![100%](https://progress-bar.dev/100/ "(416/416 bytes)")     |
| [gendung.cpp](gendung.h)   | `0x48E358`    | `0x48E3E7`  | ![100%](https://progress-bar.dev/100/ "(144/144 bytes)")     |
| [gmenu.cpp](gmenu.h)       | `0x48E3E8`    | `0x48E44B`  | ![100%](https://progress-bar.dev/100/ "(100/100 bytes)")     |
| [help.cpp](help.h)         | `0x48E44C`    | `0x48E487`  | ![100%](https://progress-bar.dev/100/ "(60/60 bytes)")       |
| [init.cpp](init.h)         | `0x48E488`    | `0x48E80F`  | ![100%](https://progress-bar.dev/100/ "(904/904 bytes)")     |
| [interfac.cpp](interfac.h) | `0x48E810`    | `0x48E9A7`  | ![100%](https://progress-bar.dev/100/ "(408/408 bytes)")     |
| [inv.cpp](inv.h)           | `0x48E9A8`    | `0x48EA8B`  | ![100%](https://progress-bar.dev/100/ "(228/228 bytes)")     |
| [items.cpp](items.h)       | `0x48EA8C`    | `0x49387B`  | ![100%](https://progress-bar.dev/100/ "(19952/19952 bytes)") |
| [lighting.cpp](lighting.h) | `0x49387C`    | `0x4947BF`  | ![100%](https://progress-bar.dev/100/ "(3908/3908 bytes)")   |
| [loadsave.cpp](loadsave.h) | `0x4947C0`    | `0x4947D3`  | ![100%](https://progress-bar.dev/100/ "(20/20 bytes)")       |
| [log.cpp](log.h)           | `0x4947D4`    | `0x494897`  | ![100%](https://progress-bar.dev/100/ "(196/196 bytes)")     |
| [mainmenu.cpp](mainmenu.h) | `0x494898`    | `0x4948F7`  | ![100%](https://progress-bar.dev/100/ "(96/96 bytes)")       |
| [minitext.cpp](minitext.h) | `0x4948F8`    | `0x494947`  | ![100%](https://progress-bar.dev/100/ "(80/80 bytes)")       |
| [missiles.cpp](missiles.h) | `0x494948`    | `0x497E07`  | ![100%](https://progress-bar.dev/100/ "(13504/13504 bytes)") |
| [monster.cpp](monster.h)   | `0x497E08`    | `0x49EEF7`  | ![100%](https://progress-bar.dev/100/ "(28912/28912 bytes)") |
| [mpqapi.cpp](mpqapi.h)     | `0x49EEF8`    | `0x49EFA7`  | ![100%](https://progress-bar.dev/100/ "(176/176 bytes)")     |
| [msg.cpp](msg.h)           | `0x49EFA8`    | `0x49F06F`  | ![100%](https://progress-bar.dev/100/ "(200/200 bytes)")     |
| _crt.cpp                   | `0x49F070`    | `0x49F08B`  | N/A                                                          |
| [multi.cpp](multi.h)       | `0x49F08C`    | `0x49F203`  | ![100%](https://progress-bar.dev/100/ "(376/376 bytes)")     |
| [nthread.cpp](nthread.h)   | `0x49F204`    | `0x49F287`  | ![100%](https://progress-bar.dev/100/ "(132/132 bytes)")     |
| [objects.cpp](objects.h)   | `0x49F288`    | `0x4A0D07`  | ![100%](https://progress-bar.dev/100/ "(6784/6784 bytes)")   |
| [palette.cpp](palette.h)   | `0x4A0D08`    | `0x4A0D6F`  | ![100%](https://progress-bar.dev/100/ "(104/104 bytes)")     |
| [path.cpp](path.h)         | `0x4A0D70`    | `0x4A0D7B`  | ![100%](https://progress-bar.dev/100/ "(12/12 bytes)")       |
| [pfile.cpp](pfile.h)       | `0x4A0D7C`    | `0x4A0EF7`  | ![100%](https://progress-bar.dev/100/ "(380/380 bytes)")     |
| [player.cpp](player.h)     | `0x4A0EF8`    | `0x4A1AAB`  | ![100%](https://progress-bar.dev/100/ "(2996/2996 bytes)")   |
| [plrmsg.cpp](plrmsg.h)     | `0x4A1AAC`    | `0x4A1ABB`  | ![100%](https://progress-bar.dev/100/ "(16/16 bytes)")       |
| [portal.cpp](portal.h)     | `0x4A1ABC`    | `0x4A1ADF`  | ![100%](https://progress-bar.dev/100/ "(36/36 bytes)")       |
| [quests.cpp](quests.h)     | `0x4A1AE0`    | `0x4A1E07`  | ![100%](https://progress-bar.dev/100/ "(808/808 bytes)")     |
| [restrict.cpp](restrict.h) | `0x4A1E08`    | `0x4A1E3F`  | ![100%](https://progress-bar.dev/100/ "(56/56 bytes)")       |
| pkware.cpp                 | `0x4A1E40`    | `0x4A1EBF`  | N/A                                                          |
| [scrollrt.cpp](scrollrt.h) | `0x4A1EC0`    | `0x4A208B`  | ![100%](https://progress-bar.dev/100/ "(460/460 bytes)")     |
| [setmaps.cpp](setmaps.h)   | `0x4A208C`    | `0x4A22D3`  | ![100%](https://progress-bar.dev/100/ "(584/584 bytes)")     |
| [sound.cpp](sound.h)       | `0x4A22D4`    | `0x4A23C7`  | ![100%](https://progress-bar.dev/100/ "(244/244 bytes)")     |
| [spells.cpp](spells.h)     | `0x4A23C8`    | `0x4A2D5B`  | ![100%](https://progress-bar.dev/100/ "(2452/2452 bytes)")   |
| [stores.cpp](stores.h)     | `0x4A2D5C`    | `0x4A34F7`  | ![100%](https://progress-bar.dev/100/ "(1948/1948 bytes)")   |
| [sync.cpp](sync.h)         | `0x4A34F8`    | `0x4A350B`  | ![100%](https://progress-bar.dev/100/ "(20/20 bytes)")       |
| [textdat.cpp](textdat.h)   | `0x4A350C`    | `0x4B2583`  | ![100%](https://progress-bar.dev/100/ "(61560/61560 bytes)") |
| [themes.cpp](themes.h)     | `0x4B2584`    | `0x4B26A3`  | ![100%](https://progress-bar.dev/100/ "(288/288 bytes)")     |
| [town.cpp](town.h)         | `0x4B26A4`    | `0x4B2723`  | ![100%](https://progress-bar.dev/100/ "(128/128 bytes)")     |
| [towners.cpp](towners.h)   | `0x4B2724`    | `0x4B2F77`  | ![100%](https://progress-bar.dev/100/ "(2132/2132 bytes)")   |
| [trigs.cpp](trigs.h)       | `0x4B2F78`    | `0x4B325B`  | ![100%](https://progress-bar.dev/100/ "(740/740 bytes)")     |
| [render.cpp](render.h)     | `0x4B325C`    | `0x4B354F`  | ![100%](https://progress-bar.dev/100/ "(756/756 bytes)")     |
| _crt.cpp                   | `0x4B3550`    | `0x4B701F`  | N/A                                                          |
| pkware.cpp                 | `0x4B7020`    | `0x4B792F`  | N/A                                                          |
