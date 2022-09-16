SRC += muse.c

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE  = no  # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE   = no  # Mouse keys(+4700)
EXTRAKEY_ENABLE   = yes # Audio control and System control(+450)
CONSOLE_ENABLE    = no  # Console for debug(+400)
COMMAND_ENABLE    = yes # Commands for debug and configuration
COMBO_ENABLE      = no  # Enable Combo feature
NKRO_ENABLE       = yes # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
AUDIO_ENABLE      = yes # Audio output on port C6
RGBLIGHT_ENABLE   = no  # Enable WS2812 RGB underlight.
LEADER_ENABLE     = no  # Enable Leader Key Support
MIDI_ENABLE       = no  # MIDI controls
UNICODE_ENABLE    = no  # Unicode
BLUETOOTH_ENABLE  = no  # Enable Bluetooth with the Adafruit EZ-Key HID

ENCODER_ENABLE    = no
DIP_SWITCH_ENABLE = no
