/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* #define ORYX_CONFIGURATOR */

#define RGBLIGHT_SLEEP

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define CAPS_WORD_IDLE_TIMEOUT 3000

/* #define MK_KINETIC_SPEED */
/* #define MOUSEKEY_INITIAL_SPEED 500 */
/* #define MOUSEKEY_BASE_SPEED 800 */
/* #define MOUSEKEY_DECELERATED_SPEED 400 */
/* #define MOUSEKEY_ACCELERATED_SPEED 1000 */

#define MK_3_SPEED
#define MK_C_OFFSET_0 8
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_1 16
#define MK_C_OFFSET_2 32
#define MK_C_INTERVAL_2 24

/* #define PERMISSIVE_HOLD */

#define TAPPING_TOGGLE 3
#define TAPPING_TERM 175

/* TURBO MOUSE MODE (see https://getreuer.info/posts/keyboards/mouse-turbo-click/index.html) */

#define MOUSE_TURBO_CLICK_PERIOD 100
/* #define MOUSE_TURBO_CLICK_KEY KC_MS_BTN1 */ /* KC_MS_BTN1 is default */
