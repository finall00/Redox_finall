/* Copyright 2017 Finall00
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

// Definição da divisão

#define MASTER_LEFT
#define EE_HANDS

#define SPLIT_LAYER_STATE_ENABLE


// #define MATRIX_ROWS 14
// #define MATRIX_COLS 6

// #define SPLIT_HAND_PIN GP20==

// #define ENCODER_PAD_A GP20
// #define ENCODER_PAD_B GP21
// #define ENCODER_RESOLUTION 4

// #define SERIAL_USART_FULL_DUPLEX
// #define SERIAL_USART_TX_PIN_GP0
// #define SERIAL_USART_RX_PIN_GP1


// Configuração dos leds matrix


#define WS2812_DI_PIN GP23

// #define RGBLIGHT_SPLIT
#define RGB_MATRIX_SPLIT { 36, 36 }
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
#define RGB_MATRIX_KEYPRESSES


// Heatmap Config


#define RGB_MATRIX_TYPING_HEATMAP_SPREAD 2

#define RGB_MATRIX_TYPING_HEATMAP_AREA_LIMIT 5

// Desativar a propagação
//#define RGB_MATRIX_TYPING_HEATMAP_SLIM


//gradiente
#define RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE


