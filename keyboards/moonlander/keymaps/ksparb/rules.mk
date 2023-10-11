# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

SRC += features/mouse_turbo_click.c

AUDIO_ENABLE = no
MOUSEKEY_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes
COMMAND_ENABLE = no
CAPS_WORD_ENABLE = yes
TAP_DANCE_ENABLE = yes
