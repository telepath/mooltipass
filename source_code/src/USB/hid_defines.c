/*
 * hid_defines.c
 *
 * Created: 02/06/2014 22:05:08
 *  Author: limpkin
 */
 #include <avr/pgmspace.h>
 #include <stdint.h>
 #include "hid_defines.h"

// Here we only cover from ' ' to ~ included, and MSB is shift modifier
const uint8_t PROGMEM keyboardLUT_EN[95] = 
{
        KEY_SPACE,                      // 0x20
        SHIFT_MASK|KEY_1,               // 0x21 !
        SHIFT_MASK|KEY_APOSTROPHE,      // 0x22 "
        SHIFT_MASK|KEY_3,               // 0x23 #
        SHIFT_MASK|KEY_4,               // 0x24 $
        SHIFT_MASK|KEY_5,               // 0x25 %
        SHIFT_MASK|KEY_7,               // 0x26 &
        KEY_APOSTROPHE,                 // 0x27 '
        SHIFT_MASK|KEY_9,               // 0x28 (
        SHIFT_MASK|KEY_0,               // 0x29 )
        SHIFT_MASK|KEY_8,               // 0x2A *
        SHIFT_MASK|KEY_EQUAL,           // 0x2B +
        KEY_COMMA,                      // 0x2C ,
        KEY_MINUS,                      // 0x2D -
        KEY_PERIOD,                     // 0x2E .
        KEY_SLASH,                      // 0x2F /
        KEY_0,                          // 0x30 0
        KEY_1,                          // 0x31 1
        KEY_2,                          // 0x32 2
        KEY_3,                          // 0x33 3
        KEY_4,                          // 0x34 4
        KEY_5,                          // 0x35 5
        KEY_6,                          // 0x36 6
        KEY_7,                          // 0x37 7
        KEY_8,                          // 0x38 8
        KEY_9,                          // 0x39 9
        SHIFT_MASK|KEY_SEMICOLON,       // 0x3A :
        KEY_SEMICOLON,                  // 0x3B ;
        SHIFT_MASK|KEY_COMMA,           // 0x3C <
        KEY_EQUAL,                      // 0x3D =
        SHIFT_MASK|KEY_PERIOD,          // 0x3E >
        SHIFT_MASK|KEY_SLASH,           // 0x3F ?
        SHIFT_MASK|KEY_2,               // 0x40 @
        SHIFT_MASK|KEY_A,               // 0x41 A
        SHIFT_MASK|KEY_B,               // 0x42 B
        SHIFT_MASK|KEY_C,               // 0x43 C
        SHIFT_MASK|KEY_D,               // 0x44 D
        SHIFT_MASK|KEY_E,               // 0x45 E
        SHIFT_MASK|KEY_F,               // 0x46 F
        SHIFT_MASK|KEY_G,               // 0x47 G
        SHIFT_MASK|KEY_H,               // 0x48 H
        SHIFT_MASK|KEY_I,               // 0x49 I
        SHIFT_MASK|KEY_J,               // 0x4A J
        SHIFT_MASK|KEY_K,               // 0x4B K
        SHIFT_MASK|KEY_L,               // 0x4C L
        SHIFT_MASK|KEY_M,               // 0x4D M
        SHIFT_MASK|KEY_N,               // 0x4E N
        SHIFT_MASK|KEY_O,               // 0x4F O
        SHIFT_MASK|KEY_P,               // 0x50 P
        SHIFT_MASK|KEY_Q,               // 0x51 Q
        SHIFT_MASK|KEY_R,               // 0x52 R
        SHIFT_MASK|KEY_S,               // 0x53 S
        SHIFT_MASK|KEY_T,               // 0x55 T
        SHIFT_MASK|KEY_U,               // 0x55 U
        SHIFT_MASK|KEY_V,               // 0x56 V
        SHIFT_MASK|KEY_W,               // 0x57 W
        SHIFT_MASK|KEY_X,               // 0x58 X
        SHIFT_MASK|KEY_Y,               // 0x59 Y
        SHIFT_MASK|KEY_Z,               // 0x5A Z
        KEY_BRACKET_LEFT,               // 0x5B [
        KEY_BACKSLASH,                  // 0x5C '\'
        KEY_BRACKET_RIGHT,              // 0x5D ]
        SHIFT_MASK|KEY_6,               // 0x5E ^
        SHIFT_MASK|KEY_MINUS,           // 0x5F _
        KEY_GRAVE,                      // 0x60 `
        KEY_A,                          // 0x61 a
        KEY_B,                          // 0x62 b
        KEY_C,                          // 0x63 c
        KEY_D,                          // 0x66 d
        KEY_E,                          // 0x65 e
        KEY_F,                          // 0x66 f
        KEY_G,                          // 0x67 g
        KEY_H,                          // 0x68 h
        KEY_I,                          // 0x69 i
        KEY_J,                          // 0x6A j
        KEY_K,                          // 0x6B k
        KEY_L,                          // 0x6C l
        KEY_M,                          // 0x6D m
        KEY_N,                          // 0x6E n
        KEY_O,                          // 0x6F o
        KEY_P,                          // 0x70 p
        KEY_Q,                          // 0x71 q
        KEY_R,                          // 0x72 r
        KEY_S,                          // 0x73 s
        KEY_T,                          // 0x75 t
        KEY_U,                          // 0x75 u
        KEY_V,                          // 0x76 v
        KEY_W,                          // 0x77 w
        KEY_X,                          // 0x78 x
        KEY_Y,                          // 0x79 y
        KEY_Z,                          // 0x7A z
        SHIFT_MASK|KEY_BRACKET_LEFT,    // 0x7B {
        SHIFT_MASK|KEY_BACKSLASH,       // 0x7C |
        SHIFT_MASK|KEY_BRACKET_RIGHT,   // 0x7D }
        SHIFT_MASK|KEY_GRAVE            // 0x7E ~
};

const uint8_t PROGMEM keyboardLUT_FRFR[95] =
{
    0x2c, // 0x20  
    0x38, // 0x21 !
    0x20, // 0x22 "
    0x60, // 0x23 #
    0x30, // 0x24 $
    0xb4, // 0x25 %
    0x1e, // 0x26 &
    0x21, // 0x27 '
    0x22, // 0x28 (
    0x2d, // 0x29 )
    0x31, // 0x2a *
    0xae, // 0x2b +
    0x10, // 0x2c ,
    0x23, // 0x2d -
    0xb6, // 0x2e .
    0xb7, // 0x2f /
    0xa7, // 0x30 0
    0x9e, // 0x31 1
    0x9f, // 0x32 2
    0xa0, // 0x33 3
    0xa1, // 0x34 4
    0xa2, // 0x35 5
    0xa3, // 0x36 6
    0xa4, // 0x37 7
    0xa5, // 0x38 8
    0xa6, // 0x39 9
    0x37, // 0x3a :
    0x36, // 0x3b ;
    0x3,  // 0x3c <
    0x2e, // 0x3d =
    0x83, // 0x3e >
    0x90, // 0x3f ?
    0x67, // 0x40 @
    0x94, // 0x41 A
    0x85, // 0x42 B
    0x86, // 0x43 C
    0x87, // 0x44 D
    0x88, // 0x45 E
    0x89, // 0x46 F
    0x8a, // 0x47 G
    0x8b, // 0x48 H
    0x8c, // 0x49 I
    0x8d, // 0x4a J
    0x8e, // 0x4b K
    0x8f, // 0x4c L
    0xb3, // 0x4d M
    0x91, // 0x4e N
    0x92, // 0x4f O
    0x93, // 0x50 P
    0x84, // 0x51 Q
    0x95, // 0x52 R
    0x96, // 0x53 S
    0x97, // 0x54 T
    0x98, // 0x55 U
    0x99, // 0x56 V
    0x9d, // 0x57 W
    0x9b, // 0x58 X
    0x9c, // 0x59 Y
    0x9a, // 0x5a Z
    0x62, // 0x5b [
    0x65, // 0x5c '\'
    0x6d, // 0x5d ]
    0x2f, // 0x5e ^
    0x25, // 0x5f _
    0x64, // 0x60 `
    0x14, // 0x61 a
    0x5,  // 0x62 b
    0x6,  // 0x63 c
    0x7,  // 0x64 d
    0x8,  // 0x65 e
    0x9,  // 0x66 f
    0xa,  // 0x67 g
    0xb,  // 0x68 h
    0xc,  // 0x69 i
    0xd,  // 0x6a j
    0xe,  // 0x6b k
    0xf,  // 0x6c l
    0x33, // 0x6d m
    0x11, // 0x6e n
    0x12, // 0x6f o
    0x13, // 0x70 p
    0x4,  // 0x71 q
    0x15, // 0x72 r
    0x16, // 0x73 s
    0x17, // 0x74 t
    0x18, // 0x75 u
    0x19, // 0x76 v
    0x1d, // 0x77 w
    0x1b, // 0x78 x
    0x1c, // 0x79 y
    0x1a, // 0x7a z
    0x61, // 0x7b {
    0x63, // 0x7c |
    0x6e, // 0x7d }
    0x5f, // 0x7e ~
};

const uint8_t PROGMEM keyboardLUT_ES[95] = 
{
    0x2c, // 0x20  
    0x9e, // 0x21 !
    0x9f, // 0x22 "
    0x60, // 0x23 #
    0xa1, // 0x24 $
    0xa2, // 0x25 %
    0xa3, // 0x26 &
    0x2d, // 0x27 '
    0xa5, // 0x28 (
    0xa6, // 0x29 )
    0xb0, // 0x2a *
    0x30, // 0x2b +
    0x36, // 0x2c ,
    0x38, // 0x2d -
    0x37, // 0x2e .
    0xa4, // 0x2f /
    0x27, // 0x30 0
    0x1e, // 0x31 1
    0x1f, // 0x32 2
    0x20, // 0x33 3
    0x21, // 0x34 4
    0x22, // 0x35 5
    0x23, // 0x36 6
    0x24, // 0x37 7
    0x25, // 0x38 8
    0x26, // 0x39 9
    0xb7, // 0x3a :
    0xb6, // 0x3b ;
    0x3,  // 0x3c <
    0xa7, // 0x3d =
    0x83, // 0x3e >
    0xad, // 0x3f ?
    0x5f, // 0x40 @
    0x84, // 0x41 A
    0x85, // 0x42 B
    0x86, // 0x43 C
    0x87, // 0x44 D
    0x88, // 0x45 E
    0x89, // 0x46 F
    0x8a, // 0x47 G
    0x8b, // 0x48 H
    0x8c, // 0x49 I
    0x8d, // 0x4a J
    0x8e, // 0x4b K
    0x8f, // 0x4c L
    0x90, // 0x4d M
    0x91, // 0x4e N
    0x92, // 0x4f O
    0x93, // 0x50 P
    0x94, // 0x51 Q
    0x95, // 0x52 R
    0x96, // 0x53 S
    0x97, // 0x54 T
    0x98, // 0x55 U
    0x99, // 0x56 V
    0x9a, // 0x57 W
    0x9b, // 0x58 X
    0x9c, // 0x59 Y
    0x9d, // 0x5a Z
    0x6f, // 0x5b [
    0x75, // 0x5c '\'
    0x70, // 0x5d ]
    0xaf, // 0x5e ^
    0xb8, // 0x5f _
    0x2f, // 0x60 `
    0x4,  // 0x61 a
    0x5,  // 0x62 b
    0x6,  // 0x63 c
    0x7,  // 0x64 d
    0x8,  // 0x65 e
    0x9,  // 0x66 f
    0xa,  // 0x67 g
    0xb,  // 0x68 h
    0xc,  // 0x69 i
    0xd,  // 0x6a j
    0xe,  // 0x6b k
    0xf,  // 0x6c l
    0x10, // 0x6d m
    0x11, // 0x6e n
    0x12, // 0x6f o
    0x13, // 0x70 p
    0x14, // 0x71 q
    0x15, // 0x72 r
    0x16, // 0x73 s
    0x17, // 0x74 t
    0x18, // 0x75 u
    0x19, // 0x76 v
    0x1a, // 0x77 w
    0x1b, // 0x78 x
    0x1c, // 0x79 y
    0x1d, // 0x7a z
    0x74, // 0x7b {
    0x5e, // 0x7c |
    0x71, // 0x7d }
    0x61, // 0x7e ~
};
const uint8_t PROGMEM keyboardLUT_DE[95] = 
{
        KEY_SPACE,                      // 0x20
        SHIFT_MASK|KEY_1,               // 0x21 !
        SHIFT_MASK|KEY_2,               // 0x22 "
        KEY_EUROPE_1,                   // 0x23 #
        SHIFT_MASK|KEY_4,               // 0x24 $
        SHIFT_MASK|KEY_5,               // 0x25 %
        SHIFT_MASK|KEY_6,               // 0x26 &
        SHIFT_MASK|KEY_EUROPE_1,        // 0x27 '
        SHIFT_MASK|KEY_8,               // 0x28 (
        SHIFT_MASK|KEY_9,               // 0x29 )
        SHIFT_MASK|KEY_BRACKET_RIGHT,   // 0x2A *
        KEY_BRACKET_RIGHT,              // 0x2B +
        KEY_COMMA,                      // 0x2C ,
        KEY_SLASH,                      // 0x2D -
        KEY_PERIOD,                     // 0x2E .
        SHIFT_MASK|KEY_7,               // 0x2F /
        KEY_0,                          // 0x30 0
        KEY_1,                          // 0x31 1
        KEY_2,                          // 0x32 2
        KEY_3,                          // 0x33 3
        KEY_4,                          // 0x34 4
        KEY_5,                          // 0x35 5
        KEY_6,                          // 0x36 6
        KEY_7,                          // 0x37 7
        KEY_8,                          // 0x38 8
        KEY_9,                          // 0x39 9
        SHIFT_MASK|KEY_PERIOD,          // 0x3A :
        SHIFT_MASK|KEY_COMMA,           // 0x3B ;
        KEY_EUROPE_2_REAL,              // 0x3C <
        SHIFT_MASK|KEY_0,               // 0x3D =
        SHIFT_MASK|KEY_EUROPE_2_REAL,   // 0x3E >
        SHIFT_MASK|KEY_MINUS,           // 0x3F ?
        ALTGR_MASK|KEY_Q,               // 0x40 @
        SHIFT_MASK|KEY_A,               // 0x41 A
        SHIFT_MASK|KEY_B,               // 0x42 B
        SHIFT_MASK|KEY_C,               // 0x43 C
        SHIFT_MASK|KEY_D,               // 0x44 D
        SHIFT_MASK|KEY_E,               // 0x45 E
        SHIFT_MASK|KEY_F,               // 0x46 F
        SHIFT_MASK|KEY_G,               // 0x47 G
        SHIFT_MASK|KEY_H,               // 0x48 H
        SHIFT_MASK|KEY_I,               // 0x49 I
        SHIFT_MASK|KEY_J,               // 0x4A J
        SHIFT_MASK|KEY_K,               // 0x4B K
        SHIFT_MASK|KEY_L,               // 0x4C L
        SHIFT_MASK|KEY_M,               // 0x4D M
        SHIFT_MASK|KEY_N,               // 0x4E N
        SHIFT_MASK|KEY_O,               // 0x4F O
        SHIFT_MASK|KEY_P,               // 0x50 P
        SHIFT_MASK|KEY_Q,               // 0x51 Q
        SHIFT_MASK|KEY_R,               // 0x52 R
        SHIFT_MASK|KEY_S,               // 0x53 S
        SHIFT_MASK|KEY_T,               // 0x55 T
        SHIFT_MASK|KEY_U,               // 0x55 U
        SHIFT_MASK|KEY_V,               // 0x56 V
        SHIFT_MASK|KEY_W,               // 0x57 W
        SHIFT_MASK|KEY_X,               // 0x58 X
        SHIFT_MASK|KEY_Y,               // 0x59 Z
        SHIFT_MASK|KEY_Z,               // 0x5A Y
        ALTGR_MASK|KEY_8,               // 0x5B [
        ALTGR_MASK|KEY_EQUAL,           // 0x5C '\'
        ALTGR_MASK|KEY_9,               // 0x5D ]
        0x35,                           // 0x5E ^
        SHIFT_MASK|KEY_SLASH,           // 0x5F _
        SHIFT_MASK|KEY_EQUAL,           // 0x60 `
        KEY_A,                          // 0x61 a
        KEY_B,                          // 0x62 b
        KEY_C,                          // 0x63 c
        KEY_D,                          // 0x66 d
        KEY_E,                          // 0x65 e
        KEY_F,                          // 0x66 f
        KEY_G,                          // 0x67 g
        KEY_H,                          // 0x68 h
        KEY_I,                          // 0x69 i
        KEY_J,                          // 0x6A j
        KEY_K,                          // 0x6B k
        KEY_L,                          // 0x6C l
        KEY_M,                          // 0x6D m
        KEY_N,                          // 0x6E n
        KEY_O,                          // 0x6F o
        KEY_P,                          // 0x70 p
        KEY_Q,                          // 0x71 q
        KEY_R,                          // 0x72 r
        KEY_S,                          // 0x73 s
        KEY_T,                          // 0x75 t
        KEY_U,                          // 0x75 u
        KEY_V,                          // 0x76 v
        KEY_W,                          // 0x77 w
        KEY_X,                          // 0x78 x
        KEY_Z,                          // 0x79 y
        KEY_Y,                          // 0x7A z
        ALTGR_MASK|KEY_7,               // 0x7B {
        SHIFT_MASK|KEY_BACKSLASH,       // 0x7C |
        ALTGR_MASK|KEY_0,               // 0x7D }
        ALTGR_MASK|KEY_BRACKET_RIGHT,   // 0x7E ~
        KEY_NONE,                       // 0x7F DEL
        KEY_NONE,                       // 0x80 €
        KEY_NONE,                       // 0x81 
        KEY_NONE,                       // 0x82 
        KEY_NONE,                       // 0x83 
        ALTGR_MASK|KEY_V,               // 0x84 „
        ALTGR_MASK|KEY_PERIOD,          // 0x85 …
        KEY_NONE,                       // 0x86 
        KEY_NONE,                       // 0x87 
        KEY_NONE,                       // 0x88 
        KEY_NONE,                       // 0x89 
        KEY_NONE,                       // 0x8A 
        KEY_NONE,                       // 0x8B 
        KEY_NONE,                       // 0x8C 
        KEY_NONE,                       // 0x8D 
        KEY_NONE,                       // 0x8E 
        KEY_NONE,                       // 0x8F 
        KEY_NONE,                       // 0x90 
        KEY_NONE,                       // 0x91 
        KEY_NONE,                       // 0x92 
        ALTGR_MASK|KEY_B,               // 0x93 “
        ALTGR_MASK|KEY_N,               // 0x94 ”
        ALTGR_MASK|KEY_COMMA,           // 0x95 
        ALTGR_MASK|KEY_SLASH,           // 0x96 –
        KEY_NONE,                       // 0x97 
        KEY_NONE,                       // 0x98 
        KEY_NONE,                       // 0x99 
        KEY_NONE,                       // 0x9A 
        KEY_NONE,                       // 0x9B 
        KEY_NONE,                       // 0x9C 
        KEY_NONE,                       // 0x9D 
        KEY_NONE,                       // 0x9E 
        KEY_NONE,                       // 0x9F 
 
        SHIFT_MASK|KEY_3,               // 0xA7
        
        ALTGR_MASK|KEY_6,               // 0xAC ¬
 
        SHIFT_MASK|0x35,                // 0xB0 °
 
        ALTGR_MASK|KEY_2,               // 0xB2 ²
        ALTGR_MASK|KEY_3,               // 0xB3 ³
 
        ALTGR_MASK|KEY_M,               // 0xB5 µ
 
        ALTGR_MASK|KEY_COMMA,           // 0xB7 ·

        ALTGR_MASK|KEY_1,               // 0xB2 ¹
 
        ALTGR_MASK|KEY_Z,               // 0xBB »
        ALTGR_MASK|KEY_4,               // 0xBC ¼
        ALTGR_MASK|KEY_5,               // 0xBD ½
 
        SHIFT_MASK|KEY_APOSTROPHE,      // 0xC4 Ä

        ALTGR_MASK|SHIFT_MASK|KEY_APOSTROPHE,      // 0xC6 Æ

 ¡⅛£¤⅜⅝⅞™±°¿˛
  ΩŁ€®Ŧ¥↑ıØÞ°¯
  ÆẞÐªŊĦ˙&Ł
  ›‹©‚‘’º×÷—
};
