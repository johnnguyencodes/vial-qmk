# Cyboard

-   Keyboard Maintainer: [Cyboard](https://github.com/Cyboard-DigitalTailor)
-   Hardware Supported: Cyboard Imprints and Dactyls
-   Hardware Availability: [Imprint](https://www.cyboard.digital/product-page/imprint), [Dactyl](https://www.cyboard.digital/product-page/custom-dactyl-manuform)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Building Firmware

Various sizes and thumb-cluster styles are supported as keymaps. To build the firmware, use the command:
`make cyboard/{MODEL}/{THUMB STYLE}_{ROWS}:vial`
where `{MODEL}` can be `imprint` or `manuform`
, `{THUMB STYLE}` can be `imprint`, `manuform`, `dual_arcs`, or `single_arc`
, and `{ROWS}` can be `function_row`, `number_row`, or `letters_only`

## Flashing

To flash the firmware to your Cyboard,

1. Enter the bootloader by double-tapping the reset button on the back of the board.
2. A USB device called `RPI-RP2` should appear on your computer.
3. Drag the `.uf2` firmware file into `RPI-RP2`. `RPI-RP2` should now disappear.
4. Repeat steps 1-3 on the other half. Note: there is a rubber plug in the right-hand USB-C-to-computer port by default. Remove that and use that port for flashing. The split connection USB-C port will not be able to flash.
   Your Cyboard is now ready to use with your new firmware!

## John's Notes

The `keymap.c` and `rules.mk` files are found in `keyboards/cyboard/imprint/imprint_function_row_underglow/keymaps/vial/`. The keymap is based off this [Oryx layout](https://configure.zsa.io/voyager/layouts/nPqXx/rnjVj/3).

Compile the firmware using this command from the root folder of this project:
`qmk compile -kb cyboard/imprint/imprint_function_row_underglow -km vial`

There will be an error regarding `multiple definitions of tap_dance_actions`. To get around this, rename the `tap_dance_actions` function in `keymap.c` to something else, like `tap_dance_actions_array`. Then run the above compile command again.

When you're ready to flash, ensure both sides of the Imprint are connected to each other, and the left (master) side is connected to the computer. Double-press the reset button inside the small hole next to the USB-C ports on the master side of the Imprint. The device `RPI-RP2` will appear on your computer's devices, indicating it is ready to be flashed.

To flash the firmware onto the keyboard, run this command from the root folder of this project:
`qmk flash -kb cyboard/imprint/imprint_function_row_underglow -km vial`

If the RGB lights are on, you will see the lights flash off for a quick moment. The keyboard is now flashed!

With the keyboard still connected, go to [Vial](https://vial.rocks/) and configure the tap dancing according to the notes listed at the bottom of `keyboard/cyboard/imprint/imprint_function_row_underglow/keymaps/vial/keymap.c`.

To-do: Create some sweet custom RGB lighting effects
To-do: Improve finger rolling experience and tap-dancing.

-   Achordion is installed. Find more info here: [Achordion](https://getreuer.info/posts/keyboards/achordion/index.html)
