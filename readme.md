# Keymaps for my mechanical keyboards

Here I store the keymaps for my mechanical keyboards. They are being written against the QMK firmware, from which this is repository is a fork.


## Build instructions

Make sure everything is set up in the first place - install python3-pip, then `python3 -m pip install --user qmk`

As I keep forgetting how to compile and flash things, this is the synopsis:
1. update the system using `apt` or `pacman` etc. to get the newest libraries to compile against
2. update the submodules: `git submodule update --init --recursive`
3. update the repository: `git fetch upstream`, then `git merge upstream/master` to merge into the current branch
4. In case of git merge issues, "both modified: lib/xyz" etc: `git checkout --theirs lib/xyz`, then `git add lib/xyz`
5. then `make <vendor>/<keyboard>/<revision>:<keymap>` to build, and append `:<bootloader>` to flash, or, using QMK toolbox, load hex file into toolbox, put board in bootloader mode, then flash

- Specifically for Quefrency: `make keebio/quefrency/rev4:ppretzel:dfu` and enter bootloader mode from the reset button accessible via the small hole in the back
- For Elite-C (uses *DFU* bootloader): `:dfu`
- For Pro-Micro (uses *Caterina* bootloader): `:avrdude`


Potentially when flashing a board for the first time, some additional steps need to be taken; above instructions are for updating the board with a new keymap

-------- Below the original readme ----------

# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the [Clueboard product line](https://clueboard.co).

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
