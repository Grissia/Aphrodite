/*
Copyright (c) 2014-2015 NicoHood
See the readme for credit to other people.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

// Include guard
#pragma once

#include "ImprovedKeylayouts.h"

// Key aliases
#define KEY_IT_QUOTE        KEY_MINUS
#define KEY_IT_IGRAVE       KEY_EQUAL
#define KEY_IT_EGRAVE       KEY_LEFT_BRACE
#define KEY_IT_PLUS         KEY_RIGHT_BRACE
#define KEY_IT_UGRAVE       KEY_BACKSLASH
#define KEY_IT_OGRAVE       KEY_SEMICOLON
#define KEY_IT_AGRAVE       KEY_QUOTE
#define KEY_IT_BACKSLASH    KEY_TILDE
#define KEY_IT_MINUS        KEY_SLASH
#define KEY_IT_LT_GT        KEY_NON_US


static const uint16_t _asciimap[] PROGMEM =
{
    KEY_RESERVED,                               // NUL
    KEY_RESERVED,                               // SOH
    KEY_RESERVED,                               // STX
    KEY_RESERVED,                               // ETX
    KEY_RESERVED,                               // EOT
    KEY_RESERVED,                               // ENQ
    KEY_RESERVED,                               // ACK
    KEY_RESERVED,                               // BEL
    KEY_BACKSPACE,                              // BS   Backspace
    KEY_TAB,                                    // TAB  Tab
    KEY_ENTER,                                  // LF   Enter
    KEY_RESERVED,                               // VT
    KEY_RESERVED,                               // FF
    KEY_RESERVED,                               // CR
    KEY_RESERVED,                               // SO
    KEY_RESERVED,                               // SI
    KEY_RESERVED,                               // DEL
    KEY_RESERVED,                               // DC1
    KEY_RESERVED,                               // DC2
    KEY_RESERVED,                               // DC3
    KEY_RESERVED,                               // DC4
    KEY_RESERVED,                               // NAK
    KEY_RESERVED,                               // SYN
    KEY_RESERVED,                               // ETB
    KEY_RESERVED,                               // CAN
    KEY_RESERVED,                               // EM
    KEY_RESERVED,                               // SUB
    KEY_RESERVED,                               // ESC
    KEY_RESERVED,                               // FS
    KEY_RESERVED,                               // GS
    KEY_RESERVED,                               // RS
    KEY_RESERVED,                               // US

    KEY_SPACE,                                  // ' ' Space
    KEY_1|MOD_LEFT_SHIFT,                       // !
    KEY_2|MOD_LEFT_SHIFT,                       // "
    KEY_IT_AGRAVE|MOD_RIGHT_ALT,                // #
    KEY_4|MOD_LEFT_SHIFT,                       // $
    KEY_5|MOD_LEFT_SHIFT,                       // %
    KEY_6|MOD_LEFT_SHIFT,                       // &
    KEY_IT_QUOTE,                               // '            
    KEY_8|MOD_LEFT_SHIFT,                       // (
    KEY_9|MOD_LEFT_SHIFT,                       // )
    KEY_IT_PLUS|MOD_LEFT_SHIFT,                 // *
    KEY_IT_PLUS,                                // +
    KEY_COMMA,                                  // ,
    KEY_IT_MINUS,                               // -
    KEY_PERIOD,                                 // .
    KEY_7|MOD_LEFT_SHIFT,                       // /
    KEY_0,                                      // 0
    KEY_1,                                      // 1
    KEY_2,                                      // 2
    KEY_3,                                      // 3
    KEY_4,                                      // 4
    KEY_5,                                      // 5
    KEY_6,                                      // 6
    KEY_7,                                      // 7
    KEY_8,                                      // 8
    KEY_9,                                      // 9
    KEY_PERIOD|MOD_LEFT_SHIFT,                  // :
    KEY_COMMA|MOD_LEFT_SHIFT,                   // ;
    KEY_IT_LT_GT,                               // <
    KEY_0|MOD_LEFT_SHIFT,                       // =
    KEY_IT_LT_GT|MOD_LEFT_SHIFT,                // >
    KEY_IT_QUOTE|MOD_LEFT_SHIFT,                // ?
    KEY_IT_OGRAVE|MOD_RIGHT_ALT,                // @
    KEY_A|MOD_LEFT_SHIFT,                       // A
    KEY_B|MOD_LEFT_SHIFT,                       // B
    KEY_C|MOD_LEFT_SHIFT,                       // C
    KEY_D|MOD_LEFT_SHIFT,                       // D
    KEY_E|MOD_LEFT_SHIFT,                       // E
    KEY_F|MOD_LEFT_SHIFT,                       // F
    KEY_G|MOD_LEFT_SHIFT,                       // G
    KEY_H|MOD_LEFT_SHIFT,                       // H
    KEY_I|MOD_LEFT_SHIFT,                       // I
    KEY_J|MOD_LEFT_SHIFT,                       // J
    KEY_K|MOD_LEFT_SHIFT,                       // K
    KEY_L|MOD_LEFT_SHIFT,                       // L
    KEY_M|MOD_LEFT_SHIFT,                       // M
    KEY_N|MOD_LEFT_SHIFT,                       // N
    KEY_O|MOD_LEFT_SHIFT,                       // O
    KEY_P|MOD_LEFT_SHIFT,                       // P
    KEY_Q|MOD_LEFT_SHIFT,                       // Q
    KEY_R|MOD_LEFT_SHIFT,                       // R
    KEY_S|MOD_LEFT_SHIFT,                       // S
    KEY_T|MOD_LEFT_SHIFT,                       // T
    KEY_U|MOD_LEFT_SHIFT,                       // U
    KEY_V|MOD_LEFT_SHIFT,                       // V
    KEY_W|MOD_LEFT_SHIFT,                       // W
    KEY_X|MOD_LEFT_SHIFT,                       // X
    KEY_Y|MOD_LEFT_SHIFT,                       // Y
    KEY_Z|MOD_LEFT_SHIFT,                       // Z
    KEY_IT_EGRAVE|MOD_RIGHT_ALT,                // [
    KEY_IT_BACKSLASH,                           // bslash
    KEY_IT_PLUS|MOD_RIGHT_ALT,                  // ]
    KEY_IT_IGRAVE|MOD_LEFT_SHIFT,               // ^
    KEY_IT_MINUS|MOD_LEFT_SHIFT,                // _
    KEY_IT_QUOTE|MOD_RIGHT_ALT,                 // ` (I think this only works on Linux)
    KEY_A,                                      // a
    KEY_B,                                      // b
    KEY_C,                                      // c
    KEY_D,                                      // d
    KEY_E,                                      // e
    KEY_F,                                      // f
    KEY_G,                                      // g
    KEY_H,                                      // h
    KEY_I,                                      // i
    KEY_J,                                      // j
    KEY_K,                                      // k
    KEY_L,                                      // l
    KEY_M,                                      // m
    KEY_N,                                      // n
    KEY_O,                                      // o
    KEY_P,                                      // p
    KEY_Q,                                      // q
    KEY_R,                                      // r
    KEY_S,                                      // s
    KEY_T,                                      // t
    KEY_U,                                      // u
    KEY_V,                                      // v
    KEY_W,                                      // w
    KEY_X,                                      // x
    KEY_Y,                                      // y
    KEY_Z,                                      // z
    KEY_IT_EGRAVE|MOD_LEFT_SHIFT|MOD_RIGHT_ALT, // {
    KEY_IT_BACKSLASH|MOD_LEFT_SHIFT,            // |
    KEY_IT_PLUS|MOD_LEFT_SHIFT|MOD_RIGHT_ALT,   // }
    KEY_IT_IGRAVE|MOD_RIGHT_ALT,                // ~ (Linux only: This works in X11, in console it's KEY_0|MOD_RIGHT_ALT)
    KEY_RESERVED,                               // 127 - DEL
    // 7-bit ASCII codes end here

    // The following characters belong to ISO-8859-15
    KEY_RESERVED,                               // 128 - Unused
    KEY_RESERVED,                               // 129 - Unused
    KEY_RESERVED,                               // 130 - Unused
    KEY_RESERVED,                               // 131 - Unused
    KEY_RESERVED,                               // 132 - Unused
    KEY_RESERVED,                               // 133 - Unused
    KEY_RESERVED,                               // 134 - Unused
    KEY_RESERVED,                               // 135 - Unused
    KEY_RESERVED,                               // 136 - Unused
    KEY_RESERVED,                               // 137 - Unused
    KEY_RESERVED,                               // 138 - Unused
    KEY_RESERVED,                               // 139 - Unused
    KEY_RESERVED,                               // 140 - Unused
    KEY_RESERVED,                               // 141 - Unused
    KEY_RESERVED,                               // 142 - Unused
    KEY_RESERVED,                               // 143 - Unused
    KEY_RESERVED,                               // 144 - Unused
    KEY_RESERVED,                               // 145 - Unused
    KEY_RESERVED,                               // 146 - Unused
    KEY_RESERVED,                               // 147 - Unused
    KEY_RESERVED,                               // 148 - Unused
    KEY_RESERVED,                               // 149 - Unused
    KEY_RESERVED,                               // 150 - Unused
    KEY_RESERVED,                               // 151 - Unused
    KEY_RESERVED,                               // 152 - Unused
    KEY_RESERVED,                               // 153 - Unused
    KEY_RESERVED,                               // 154 - Unused
    KEY_RESERVED,                               // 155 - Unused
    KEY_RESERVED,                               // 156 - Unused
    KEY_RESERVED,                               // 157 - Unused
    KEY_RESERVED,                               // 158 - Unused
    KEY_RESERVED,                               // 159 - Unused
    KEY_RESERVED,                               // 160 - Non-breaking Space
    KEY_RESERVED,                               // 161 - Inverted Exclamation Mark
    KEY_RESERVED,                               // 162 - Cent
    KEY_3|MOD_LEFT_SHIFT,                       // 163 - British Pound Sign
    KEY_E|MOD_RIGHT_ALT,                        // 164 - Euro Sign
    KEY_RESERVED,                               // 165 - Yen
    KEY_RESERVED,                               // 166 - Capital 's' Inverted Circumflex
    KEY_IT_UGRAVE|MOD_LEFT_SHIFT,               // 167 - Section Sign
    KEY_RESERVED,                               // 168 - 's' Inverted Circumflex
    KEY_RESERVED,                               // 169 - Copyright Sign
    KEY_RESERVED,                               // 170 - Superscript 'a'
    KEY_RESERVED,                               // 171 - Open Guillemet
    KEY_RESERVED,                               // 172 - Logic Negation
    KEY_RESERVED,                               // 173 - Soft Hypen
    KEY_RESERVED,                               // 174 - Registered Trademark
    KEY_RESERVED,                               // 175 - Macron
    KEY_IT_AGRAVE|MOD_LEFT_SHIFT,               // 176 - Degree Symbol
    KEY_RESERVED,                               // 177 - Plus-Minus
    KEY_RESERVED,                               // 178 - Superscript '2'
    KEY_RESERVED,                               // 179 - Superscript '3'
    KEY_RESERVED,                               // 180 - Capital 'z' Inverted Circumflex
    KEY_RESERVED,                               // 181 - Micro Symbol
    KEY_RESERVED,                               // 182 - Paragraph Mark
    KEY_RESERVED,                               // 183 - Interpunct
    KEY_RESERVED,                               // 184 - 'z' Inverted Circumflex
    KEY_RESERVED,                               // 185 - Superscript '1'
    KEY_RESERVED,                               // 186 - Ordinal Indicator
    KEY_RESERVED,                               // 187 - Closed Guillemet
    KEY_RESERVED,                               // 188 - Capital 'oe'
    KEY_RESERVED,                               // 189 - 'oe'
    KEY_RESERVED,                               // 190 - Capital 'y' Umlaut
    KEY_RESERVED,                               // 191 - Inverted Question Mark
    KEY_RESERVED,                               // 192 - Capital 'a' Grave
    KEY_RESERVED,                               // 193 - Capital 'a' Acute
    KEY_RESERVED,                               // 194 - Capital 'a' Circumflex
    KEY_RESERVED,                               // 195 - Capital 'a' Tilde
    KEY_RESERVED,                               // 196 - Capital 'a' Umlaut
    KEY_RESERVED,                               // 197 - Capital 'a' Circle
    KEY_RESERVED,                               // 198 - Capital 'ae'
    KEY_RESERVED,                               // 199 - Capital 'c' Cedilla
    KEY_RESERVED,                               // 200 - Capital 'e' Grave
    KEY_RESERVED,                               // 201 - Capital 'e' Acute
    KEY_RESERVED,                               // 202 - Capital 'e' Circumflex
    KEY_RESERVED,                               // 203 - Capital 'e' Umlaut
    KEY_RESERVED,                               // 204 - Capital 'i' Grave
    KEY_RESERVED,                               // 205 - Capital 'i' Acute
    KEY_RESERVED,                               // 206 - Capital 'i' Circumflex
    KEY_RESERVED,                               // 207 - Capital 'i' Umlaut
    KEY_RESERVED,                               // 208 - Capital Eth
    KEY_RESERVED,                               // 207 - Capital 'n' Tilde
    KEY_RESERVED,                               // 210 - Capital 'o' Grave
    KEY_RESERVED,                               // 211 - Capital 'o' Acute
    KEY_RESERVED,                               // 212 - Capital 'o' Circumflex
    KEY_RESERVED,                               // 213 - Capital 'o' Tilde
    KEY_RESERVED,                               // 214 - Capital 'o' Umlaut
    KEY_RESERVED,                               // 215 - Multiplication Sign
    KEY_RESERVED,                               // 216 - Capital 'o' Barred
    KEY_RESERVED,                               // 217 - Capital 'u' Grave
    KEY_RESERVED,                               // 218 - Capital 'u' Acute
    KEY_RESERVED,                               // 219 - Capital 'u' Circumflex
    KEY_RESERVED,                               // 220 - Capital 'u' Umlaut
    KEY_RESERVED,                               // 221 - Capital 'y' Acute
    KEY_RESERVED,                               // 222 - Capital Thorn
    KEY_RESERVED,                               // 223 - Eszett
    KEY_IT_AGRAVE,                              // 224 - 'a' Grave
    KEY_RESERVED,                               // 225 - 'a' Acute
    KEY_RESERVED,                               // 226 - 'a' Circumflex
    KEY_RESERVED,                               // 227 - 'a' Tilde
    KEY_RESERVED,                               // 228 - 'a' Umlaut
    KEY_RESERVED,                               // 229 - 'a' Circle
    KEY_RESERVED,                               // 230 - 'ae'
    KEY_IT_OGRAVE|MOD_LEFT_SHIFT,               // 231 - 'c' Cedilla
    KEY_IT_EGRAVE,                              // 232 - 'e' Grave
    KEY_IT_EGRAVE|MOD_LEFT_SHIFT,               // 233 - 'e' Acute
    KEY_RESERVED,                               // 234 - 'e' Circumflex
    KEY_RESERVED,                               // 235 - 'e' Umlaut
    KEY_IT_IGRAVE,                              // 236 - 'i' Grave
    KEY_RESERVED,                               // 237 - 'i' Acute
    KEY_RESERVED,                               // 238 - 'i' Circumflex
    KEY_RESERVED,                               // 239 - 'i' Umlaut
    KEY_RESERVED,                               // 240 - Eth
    KEY_RESERVED,                               // 241 - 'n' Tilde
    KEY_IT_OGRAVE,                              // 242 - 'o' Grave
    KEY_RESERVED,                               // 243 - 'o' Acute
    KEY_RESERVED,                               // 244 - 'o' Circumflex
    KEY_RESERVED,                               // 245 - 'o' Tilde
    KEY_RESERVED,                               // 246 - 'o' Umlaut
    KEY_RESERVED,                               // 247 - Multiplication Sign
    KEY_RESERVED,                               // 248 - 'o' Barred
    KEY_IT_UGRAVE,                              // 249 - 'u' Grave
    KEY_RESERVED,                               // 250 - 'u' Acute
    KEY_RESERVED,                               // 251 - 'u' Circumflex
    KEY_RESERVED,                               // 252 - 'u' Umlaut
    KEY_RESERVED,                               // 253 - 'y' Acute
    KEY_RESERVED,                               // 254 - Thorn
    KEY_RESERVED,                               // 255 - 'y' Umlaut
};
