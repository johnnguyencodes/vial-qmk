# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # USB Nkey Rollover
SPLIT_KEYBOARD = yes

AUDIO_SUPPORTED = no        # Audio is not supported

SERIAL_DRIVER = vendor

# https://github.com/qmk/qmk_firmware/issues/19593#issuecomment-1387476045
NO_USB_STARTUP_CHECK = yes
