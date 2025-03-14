/*
Copyright 2023 Shigure

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define EECONFIG_KB_DATA_SIZE (1)

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_VAL 200

// TT set to two taps
#define TAPPING_TOGGLE 2

/*  Handle GRAVESC combo keys */
// #define GRAVE_ESC_ALT_OVERRIDE
// #define GRAVE_ESC_SHIFT_OVERRIDE
#define GRAVE_ESC_CTRL_OVERRIDE

// tap vs hold time difference
#define TAPPING_TERM 200

// one shot tap settings
#define ONESHOT_TAP_TAGGLE 3
#define ONESHOT_TIMEOUT 1500

#define RGBLIGHT_SLEEP // allows us to use rgblight_suspend() and rgblight_wakeup() in keymap.c
#define RGBLIGHT_TIMEOUT 900000
