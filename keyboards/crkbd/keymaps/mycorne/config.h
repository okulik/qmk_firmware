#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 200 // if set to 0, turns this off
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define COMBO_ONLY_FROM_LAYER 0
#define ONESHOT_TIMEOUT 1000

#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_WHEEL_DELAY 0

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define OLED_BRIGHTNESS 150
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

// Fixes the issue of having to disconnect and reconnect after a system boot.
// However, it adds a long boot delay to the slave side if flashed onto it with this enabled.
// Don't forget fo comment it out when flashing the slave side.
#define SPLIT_USB_TIMEOUT 10000
#define SPLIT_USB_TIMEOUT_POLL 10
