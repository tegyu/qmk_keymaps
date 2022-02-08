# Personal qmk keymaps

This branch is a keymap for kbd75 rev2 PCB

## Setup

    git clone -b kbd75 https://github.com/esnahn/qmk_keymaps.git ~/qmk_firmware/keyboards/kbdfans/kbd75/keymaps/esnahn

## Build

Run:

    qmk compile -kb kbdfans/kbd75/rev2 -km esnahn

or:

    ./compile

or, run build task `qmk compile` in vscode