#!/usr/bin/fish
# # direct from json
# qmk compile ./layouts/v6add_gaming.json -e CONVERT_TO=promicro_rp2040

# convert json to c
qmk json2c ./layouts/v7.json >keyboards/handwired/dactyl_manuform/5x6/keymaps/dylan/keymap.c

# # compile keymap and create binary
# qmk compile -kb handwired/dactyl_manuform/5x6 -km dylan -e CONVERT_TO=promicro_rp2040
