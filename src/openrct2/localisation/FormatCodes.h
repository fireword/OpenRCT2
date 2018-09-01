/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#ifndef _FORMAT_CODES_H_
#define _FORMAT_CODES_H_

#include "../common.h"

uint32_t format_get_code(const char* token);
const char* format_get_token(uint32_t code);

enum
{
    // Font format codes

    // The next byte specifies the X coordinate
    FORMAT_MOVE_X = 1,
    // The next byte specifies the palette
    FORMAT_ADJUST_PALETTE,

    FORMAT_3,
    FORMAT_4,

    // Moves to the next line
    FORMAT_NEWLINE = 5,
    // Moves less than NEWLINE
    FORMAT_NEWLINE_SMALLER,

    FORMAT_TINYFONT,
    FORMAT_BIGFONT,
    FORMAT_MEDIUMFONT,
    FORMAT_SMALLFONT,

    FORMAT_OUTLINE,
    FORMAT_OUTLINE_OFF,

    // Changes the colour of the text to a predefined window colour.
    FORMAT_WINDOW_COLOUR_1,
    FORMAT_WINDOW_COLOUR_2,
    FORMAT_WINDOW_COLOUR_3,

    FORMAT_16,

    // The next 2 bytes specify the X and Y coordinates
    FORMAT_NEWLINE_X_Y = 17,

    // The next 4 bytes specify the sprite
    FORMAT_INLINE_SPRITE = 23,

    // Argument format codes
    FORMAT_ARGUMENT_CODE_START = 123, // 'z' == 122 or 0x7A
    FORMAT_COMMA32 = 123,
    FORMAT_INT32,
    FORMAT_COMMA2DP32,
    FORMAT_COMMA16,
    FORMAT_UINT16,
    FORMAT_CURRENCY2DP,
    FORMAT_CURRENCY,
    FORMAT_STRINGID,
    FORMAT_STRINGID2,
    FORMAT_STRING,
    FORMAT_MONTHYEAR,
    FORMAT_MONTH,
    FORMAT_VELOCITY,
    FORMAT_POP16,
    FORMAT_PUSH16,
    FORMAT_DURATION,
    FORMAT_REALTIME,
    FORMAT_LENGTH,
    FORMAT_SPRITE,
    FORMAT_ARGUMENT_CODE_END = FORMAT_SPRITE,

    // Colour format codes
    FORMAT_COLOUR_CODE_START = 142,
    FORMAT_BLACK = 142,
    FORMAT_GREY,
    FORMAT_WHITE,
    FORMAT_RED,
    FORMAT_GREEN,
    FORMAT_YELLOW,
    FORMAT_TOPAZ,
    FORMAT_CELADON,
    FORMAT_BABYBLUE,
    FORMAT_PALELAVENDER,
    FORMAT_PALEGOLD,
    FORMAT_LIGHTPINK,
    FORMAT_PEARLAQUA,
    FORMAT_PALESILVER,
    FORMAT_COLOUR_CODE_END = FORMAT_PALESILVER,

    // Extra non-ASCII characters
    FORMAT_INVERTEDEXCLAMATION = 161,
    FORMAT_POUND = 163,
    FORMAT_YEN = 165,
    FORMAT_COPYRIGHT = 169,
    FORMAT_LEFTGUILLEMET = 171,
    FORMAT_DEGREE = 176,
    FORMAT_SQUARED = 178,
    FORMAT_RIGHTGUILLEMET = 187,
    FORMAT_INVERTEDQUESTION = 191,

    FORMAT_SINGLE_OPENQUOTE = 8216,
    FORMAT_SINGLE_ENDQUOTE = 8217,
    FORMAT_GERMAN_SINGLE_OPENQUOTE = 8218,
    FORMAT_OPENQUOTES = 8220,
    FORMAT_ENDQUOTES = 8221,
    FORMAT_GERMAN_OPENQUOTES = 8222,

    FORMAT_BULLET = 8226,
    FORMAT_POWERNEGATIVEONE = 8315,
    FORMAT_EURO = 8364,

    FORMAT_APPROX = 8776,

    FORMAT_UP = 9650,
    FORMAT_RIGHT = 9654,
    FORMAT_DOWN = 9660,
    FORMAT_LEFT = 9664,

    FORMAT_SMALLUP = 9652,
    FORMAT_SMALLDOWN = 9662,

    FORMAT_TICK = 10003,
    FORMAT_CROSS = 10005,

    FORMAT_SYMBOL_RAILWAY = 128740,
    FORMAT_SYMBOL_ROAD = 128739,
    FORMAT_SYMBOL_FLAG = 128681,

    // Format codes that need suitable Unicode allocations
    FORMAT_COMMA1DP16 = 20004
};

enum RCT2Polish
{
    RCT2_A_OGONEK_UC = 159, // 0x9F
    RCT2_C_ACUTE_UC = 162,  // 0xA2
    RCT2_E_OGONEK_UC = 166, // 0xA6
    RCT2_N_ACUTE_UC = 198,  // 0xC6
    RCT2_L_STROKE_UC = 167, // 0xA7
    RCT2_S_ACUTE_UC = 208,  // 0xD0
    RCT2_Z_DOT_UC = 216,    // 0xD8
    RCT2_Z_ACUTE_UC = 215,  // 0xD7

    RCT2_A_OGONEK = 221, // 0xDD
    RCT2_C_ACUTE = 222,  // 0xDE
    RCT2_E_OGONEK = 230, // 0xE6
    RCT2_N_ACUTE = 240,  // 0xF0
    RCT2_L_STROKE = 247, // 0xF7
    RCT2_S_ACUTE = 248,  // 0xF8
    RCT2_Z_DOT = 253,    // 0xFD
    RCT2_Z_ACUTE = 254,  // 0xFE
};

enum UnicodePolish
{
    UNICODE_A_OGONEK_UC = 260,
    UNICODE_C_ACUTE_UC = 262,
    UNICODE_E_OGONEK_UC = 280,
    UNICODE_N_ACUTE_UC = 323,
    UNICODE_L_STROKE_UC = 321,
    UNICODE_S_ACUTE_UC = 346,
    UNICODE_Z_DOT_UC = 379,
    UNICODE_Z_ACUTE_UC = 377,

    UNICODE_A_OGONEK = 261,
    UNICODE_C_ACUTE = 263,
    UNICODE_E_OGONEK = 281,
    UNICODE_N_ACUTE = 324,
    UNICODE_L_STROKE = 322,
    UNICODE_S_ACUTE = 347,
    UNICODE_Z_DOT = 380,
    UNICODE_Z_ACUTE = 378,
};

enum UnicodeCatalan
{
    UNICODE_INTERPUNCT = 183,
};

enum UnicodeGerman
{
    UNICODE_CAPITAL_SHARP_S = 0x1E9E,
};

enum UnicodeNorwegianDanish
{
    UNICODE_AE_UC = 198,
    UNICODE_O_STROKE_UC = 216,
    UNICODE_AE = 230,
    UNICODE_O_STROKE = 248,
};

enum UnicodeCyrillic
{
    UNICODE_CYRILLIC_A_UC = 1040,
    UNICODE_CYRILLIC_BE_UC = 1041,
    UNICODE_CYRILLIC_VE_UC = 1042,
    UNICODE_CYRILLIC_GHE_UC = 1043,
    UNICODE_CYRILLIC_DE_UC = 1044,
    UNICODE_CYRILLIC_IE_UC = 1045,
    UNICODE_CYRILLIC_ZHE_UC = 1046,
    UNICODE_CYRILLIC_ZE_UC = 1047,
    UNICODE_CYRILLIC_I_UC = 1048,
    UNICODE_CYRILLIC_SHORT_I_UC = 1049,
    UNICODE_CYRILLIC_KA_UC = 1050,
    UNICODE_CYRILLIC_EL_UC = 1051,
    UNICODE_CYRILLIC_EM_UC = 1052,
    UNICODE_CYRILLIC_EN_UC = 1053,
    UNICODE_CYRILLIC_O_UC = 1054,
    UNICODE_CYRILLIC_PE_UC = 1055,
    UNICODE_CYRILLIC_ER_UC = 1056,
    UNICODE_CYRILLIC_ES_UC = 1057,
    UNICODE_CYRILLIC_TE_UC = 1058,
    UNICODE_CYRILLIC_U_UC = 1059,
    UNICODE_CYRILLIC_EF_UC = 1060,
    UNICODE_CYRILLIC_HA_UC = 1061,
    UNICODE_CYRILLIC_TSE_UC = 1062,
    UNICODE_CYRILLIC_CHE_UC = 1063,
    UNICODE_CYRILLIC_SHA_UC = 1064,
    UNICODE_CYRILLIC_SHCHA_UC = 1065,
    UNICODE_CYRILLIC_HARD_SIGN_UC = 1066,
    UNICODE_CYRILLIC_YERU_UC = 1067,
    UNICODE_CYRILLIC_SOFT_SIGN_UC = 1068,
    UNICODE_CYRILLIC_E_UC = 1069,
    UNICODE_CYRILLIC_YU_UC = 1070,
    UNICODE_CYRILLIC_YA_UC = 1071,

    UNICODE_CYRILLIC_A = 1072,
    UNICODE_CYRILLIC_BE = 1073,
    UNICODE_CYRILLIC_VE = 1074,
    UNICODE_CYRILLIC_GHE = 1075,
    UNICODE_CYRILLIC_DE = 1076,
    UNICODE_CYRILLIC_IE = 1077,
    UNICODE_CYRILLIC_ZHE = 1078,
    UNICODE_CYRILLIC_ZE = 1079,
    UNICODE_CYRILLIC_I = 1080,
    UNICODE_CYRILLIC_SHORT_I = 1081,
    UNICODE_CYRILLIC_KA = 1082,
    UNICODE_CYRILLIC_EL = 1083,
    UNICODE_CYRILLIC_EM = 1084,
    UNICODE_CYRILLIC_EN = 1085,
    UNICODE_CYRILLIC_O = 1086,
    UNICODE_CYRILLIC_PE = 1087,
    UNICODE_CYRILLIC_ER = 1088,
    UNICODE_CYRILLIC_ES = 1089,
    UNICODE_CYRILLIC_TE = 1090,
    UNICODE_CYRILLIC_U = 1091,
    UNICODE_CYRILLIC_EF = 1092,
    UNICODE_CYRILLIC_HA = 1093,
    UNICODE_CYRILLIC_TSE = 1094,
    UNICODE_CYRILLIC_CHE = 1095,
    UNICODE_CYRILLIC_SHA = 1096,
    UNICODE_CYRILLIC_SHCHA = 1097,
    UNICODE_CYRILLIC_HARD_SIGN = 1098,
    UNICODE_CYRILLIC_YERU = 1099,
    UNICODE_CYRILLIC_SOFT_SIGN = 1100,
    UNICODE_CYRILLIC_E = 1101,
    UNICODE_CYRILLIC_YU = 1102,
    UNICODE_CYRILLIC_YA = 1103,

    UNICODE_CYRILLIC_IO_UC = 1025,
    UNICODE_CYRILLIC_IO = 1105,

};

enum UnicodeTurkish
{
    UNICODE_G_BREVE_UC = 286,
    UNICODE_G_BREVE = 287,
    UNICODE_I_WITH_DOT_UC = 304,
    UNICODE_I_WITHOUT_DOT = 305,
    UNICODE_S_CEDILLA_UC = 350,
    UNICODE_S_CEDILLA = 351,
};

enum UnicodeRomanian
{
    UNICODE_A_BREVE_UC = 258,
    UNICODE_A_BREVE = 259,
    UNICODE_S_COMMA_UC = 536,
    UNICODE_S_COMMA = 537,
    UNICODE_T_COMMA_UC = 538,
    UNICODE_T_COMMA = 539,
};

enum UnicodeDingbats
{
    UNICODE_DINGBATS_PLUS = 0x2795,
    UNICODE_DINGBATS_MINUS = 0x2796,
};

enum UnicodeCurrency
{
    UNICODE_GUILDER_SIGN = 402,

    // Not a currency sign, but the guilder sign will be capitalised to this.
    UNICODE_F_WITH_HOOK_UC = 401,
};

enum UnicodePunctuation
{
    UNICODE_ELLIPSIS = 8230,
};

enum UnicodeCzech
{
    UNICODE_C_CARON_UC = 268,
    UNICODE_C_CARON = 269,
    UNICODE_Y_ACUTE_UC = 221,
    UNICODE_Y_ACUTE = 253,
};

enum UnicodeHungarian
{
    UNICODE_O_DOUBLE_ACUTE_UC = 336,
    UNICODE_O_DOUBLE_ACUTE = 337,
    UNICODE_U_DOUBLE_ACUTE_UC = 368,
    UNICODE_U_DOUBLE_ACUTE = 369,
};

#endif
