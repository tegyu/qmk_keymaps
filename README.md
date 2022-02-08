# Personal qmk keymaps

## Setup

    git clone -b <branch> https://github.com/esnahn/qmk_keymaps.git ~/qmk_firmware/keyboards/<keyboard>/keymaps/esnahn

## Build

Run:

    qmk compile -kb <keyboard> -km esnahn

or:

    ./compile

or, run build task `qmk compile` in vscode
