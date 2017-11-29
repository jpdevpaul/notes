# Variable Name Descriptions

Within Diablo the same variable name may be used within different contexts. The intention of this document is to provide a brief description of what each variable name represent based on its context.

## Screen Coordinates

The pixels of the screen are accessed through a [Screen](https://github.com/sanctuary/notes/blob/master/structs.h#Screen) structure, with 64 byte padding on the left, 64 on the right, 160 on the top and 16 on the bottom side of the screen, respectively.

* `x`: x-coordinate from top left corner of screen.
* `y`: y-coordinate from top left corner of screen.
* `screen_x`: x-coordinate+64 from top left corner of screen.
* `screen_y`: y-coordinate+160 from top left corner of screen.
* `width`: width in number of pixels.
* `height`: height in number of pixels.

```
0 <= x < 640
0 <= y < 480

0 <= screen_x < 768
0 <= screen_y < 656

x = screen_x-64
y = screen_y-160

  0
0 +-----------------------------------------------+ 768-1
  |      0                                        |
  |    0 +--------------------------------+ 640-1 |
  |      |                                |       |
  |      |                                |       |
  |      |                                |       |
  |      |                                |       |
  |      |                                |       |
  |      |                                |       |
  |      +--------------------------------+       |
  |     480-1                                     |
  +-----------------------------------------------+
 656-1
```

## Map Coordinates

Primarily, there are two kinds of maps.

* 112x112 maps where each cell has the in game width of a [dungeon piece](https://godoc.org/github.com/sanctuary/formats/level/min) (64 pixels).
* 40x40 maps where each cell has the in game width of a tile [tile](https://godoc.org/github.com/sanctuary/formats/level/til) (128 pixels).

* `x`: x-coordinate on a 112x112 map.
* `y`: y-coordinate on a 112x112 map.
* `w`: width in dungeon pieces on a 112x112 map.
* `h`: height in dungeon pieces on a 112x112 map.

```
0 <= x < 112
0 <= y < 112

                  (x=0, y=0)
                      _
                     / \
                    /   \
               y   /     \   x
                  /       \
                 /         \
(x=0, y=112-1)  |           |  (x=112-1, y=0)
                 \         /
                  \       /
                   \     /
                    \   /
                     \_/
              (x=112-1, y=112-1)
```

* `tx`: x-coordinate on a 40x40 map.
* `ty`: y-coordinate on a 40x40 map.
* `tw`: width in tiles on a 40x40 map.
* `th`: height in tiles on a 40x40 map.

```
                  (tx=0, ty=0)
                       _
                      / \
                     /   \
               ty   /     \   tx
                   /       \
                  /         \
(tx=0, ty=40-1)  |           |  (tx=40-1, ty=0)
                  \         /
                   \       /
                    \     /
                     \   /
                      \_/
               (tx=40-1, ty=40-1)
```

Specifically for dungeon generation, there are additional kinds of maps.

* 80x80 maps represent [tile ID](https://github.com/sanctuary/notes/blob/master/enums.h#l1_tile_id) maps of twice the size, repeating each tile of the original 40x40 map in blocks of 2x2.

* `dx`: x-coordinate on a 80x80 map.
* `dy`: y-coordinate on a 80x80 map.
* `dw`: width in tiles on a 80x80 map.
* `dh`: height in tiles on a 80x80 map.

```
0 <= dx < 80
0 <= dy < 80

                  (dx=0, dy=0)
                       _
                      / \
                     /   \
               dy   /     \   dx
                   /       \
                  /         \
(dx=0, dy=80-1)  |           |  (dx=80-1, dy=0)
                  \         /
                   \       /
                    \     /
                     \   /
                      \_/
               (dx=80-1, dy=80-1)
```
