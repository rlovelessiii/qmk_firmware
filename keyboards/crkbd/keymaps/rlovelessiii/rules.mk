
# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./keymaps/rlovelessiii/lib/layer_state_reader.c \
        ./keymaps/rlovelessiii/lib/logo_reader.c \
        ./keymaps/rlovelessiii/lib/keylogger.c \
        ./keymaps/rlovelessiii/lib/host_led_state_reader.c \
        # ./lib/rgb_state_reader.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/timelogger.c \

RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = WS2812

# if firmware size over limit, try this option
CFLAGS += -flto
