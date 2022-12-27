# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.

BOOTMAGIC_ENABLE = no      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
MIDI_ENABLE = no            # MIDI controls
AUDIO_ENABLE = no           # Audio output on port C6
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend

# unicode
UNICODE_ENABLE = no          # Cannot enable more than one Unicode method (UNICODE, UNICODEMAP, UCIS) at the same time
UNICODEMAP_ENABLE = yes      # Unicode Map

# macro
SEND_STRING_ENABLE = yes	 # enabled by default
DYNAMIC_MACRO_ENABLE = yes

LAYOUTS = esnahn
