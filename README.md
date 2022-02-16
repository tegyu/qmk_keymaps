# Personal qmk keymaps

This branch is a keymap for XD60 rev3 PCB

## Setup

    git clone -b xd60 https://github.com/esnahn/qmk_keymaps.git ~/qmk_firmware/keyboards/xiudi/xd60/keymaps/esnahn

## Build

Run:

    qmk compile -kb xiudi/xd60/rev3 -km esnahn

or:

    ./compile

or, run build task `qmk compile` in vscode
