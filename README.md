# Notes

[![Join the chat at https://gitter.im/sanctuary/notes](https://badges.gitter.im/sanctuary/notes.svg)](https://gitter.im/sanctuary/notes)
[![Build Status](https://travis-ci.org/sanctuary/notes.svg)](https://travis-ci.org/sanctuary/notes)

The aim of this project is to organize and cross-reference a collection of notes related to the inner workings of the Diablo 1 game engine.

The notes are currently organized into the following categories.

* [Functions](funcs/README.md): function declarations.
* [Global variables (read-only)](rdata/README.md): global variable declarations in the read-only data section.
* [Global variables (read-write)](data/README.md): global variable declarations in the read-write data section.
* [Global variables (uninitialized)](bss/README.md): global variable declarations in the uninitialized data section.
* [Structs](include/structs.h): structure definitions.
* [Enums](include/enums.h): enumerate definitions.
* [Storm ordinals](include/storm/storm.h): Storm.dll function declarations based on ordinal numbers.
* [Variable naming conventions](name_desc.md): variable naming convention based on context.

## Online documentation

The collective notes of this repository are made available online at http://sanctuary.github.io/notes/

The online pages are generated by the [Scripture](https://github.com/Predelnik/Scripture) tool, which produces searchable documentation of source code with type definitions cross-referenced from global variable and function declarations. A Git commit hook ensures that new updates to the `notes` repository are instantly mirrored to the online documentation pages.

## Progress

| Category                                          | Progess                                                        |
|---------------------------------------------------|----------------------------------------------------------------|
| [Functions](funcs/README.md)                      | ![37%](https://progress-bar.dev/37/ "(741/1957 functions)")    |
| [Global variables (read-only)](rdata/README.md)   | ![100%](https://progress-bar.dev/100/ "(28372/28372 bytes)")   |
| [Global variables (read-write)](data/README.md)   | ![100%](https://progress-bar.dev/100/ "(196860/196860 bytes)") |
| [Global variables (uninitialized)](bss/README.md) | ![96%](https://progress-bar.dev/96/ "(1971606/2048520 bytes)") |
| [Storm ordinals](include/storm.md)                | ![100%](https://progress-bar.dev/100/ "(58/58 functions)")     |

The README of each sub-project tracks the progress for each of its source files.

## Contributing

Anyone interested in contributing to the project may do so in whichever way they desire. This may include:

1. Provide ideas on how to better structure the information
2. Point out mistakes or inconsistencies in the notes
3. Improve the existing notes
4. Add documentation for
	- function declarations (e.g. `drlg_l1_place_door`: [code](https://github.com/sanctuary/notes/blob/fe200926d56a603b2173c5c2b0e3a97cc8649c6b/funcs/drlg_l1.h#L88), [doc](http://sanctuary.github.io/notes/#address/0x40B56F))
	- global variable declarations (e.g. `items`: [code](https://github.com/sanctuary/notes/blob/fe200926d56a603b2173c5c2b0e3a97cc8649c6b/bss/items.h#L3), [doc](http://sanctuary.github.io/notes/#address/0x635A28))
	- structure definitions (e.g. `Player`: [code](https://github.com/sanctuary/notes/blob/3bf136c2f1f230aed0ca01585eb65a019d9e38ff/include/structs.h#L1725), [doc](http://sanctuary.github.io/notes/#struct/Player))
	- enumerate definitions (e.g. `quest_level`: [code](https://github.com/sanctuary/notes/blob/dd2c34fbb172f4e05aca7ac5e803bc6846b7a7a8/include/enums.h#L1632), [doc](http://sanctuary.github.io/notes/#enum/quest_level))
5. Improve the [Scripture](https://github.com/Predelnik/Scripture) documentation generation tool.
6. ...

## Credits

None of this work would have been possible without [Jarulf's Guide to Diablo and Hellfire](http://www.lurkerlounge.com/diablo/jarulf/jarulf162.pdf), one of few truly amazing resources on the Internet.
