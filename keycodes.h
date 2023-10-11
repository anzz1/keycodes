// keycodes.h

#ifndef _KEYCODES_H
#define _KEYCODES_H

/* 
 * keycodes.h v1.00
 *   http://github.com/anzz1/keycodes/keycodes.h
 *
 */

#include <windows.h>

const BYTE extKeys[] = {
    0x21,          // PRIOR (PgUp)
    0x22,          // NEXT  (PgDn)
    0x23,          // END
    0x24,          // HOME
    0x25,          // LEFT
    0x26,          // UP
    0x27,          // RIGHT
    0x28,          // DOWN
    0x2D,          // INSERT
    0xA3,          // RCONTROL
    0xA5,          // RMENU
    0x6F,          // DIVIDE
//  0x0D,          // ENTER (KEYPAD)
};

struct ALT_KEY_NAME {
    char name[12];
    BYTE code;
};

struct ALT_KEY_NAME altKeyNames[] = {
    {"MOUSE1", 0x01},
    {"LMB", 0x01},
    {"MOUSE2", 0x02},
    {"RMB", 0x02},
    {"MOUSE3", 0x04},
    {"MMB", 0x04},
    {"MOUSE4", 0x05},
    {"MOUSE5", 0x06},
    {"BACKSPACE", 0x08},
    {"ENTER", 0x0D},
    {"CAPS", 0x14},
    {"CAPSLOCK", 0x14},
    {"HANGUEL", 0x15},
    {"HANGUL", 0x15},
    {"HANJA", 0x19},
    {"ESC", 0x1B},
    {"CTRL", 0x11},
    {"LCTRL", 0x2A},
    {"RCTRL", 0x2B},
    {"ALT", 0x12},
    {"LALT", 0x2C},
    {"RALT", 0x2D},
    {"PGUP", 0x21},
    {"PAGEUP", 0x21},
    {"PGDN", 0x22},
    {"PAGEDOWN", 0x22},
    {"LEFTARROW", 0x25},
    {"ARROWLEFT", 0x25},
    {"UPARROW", 0x26},
    {"ARROWUP", 0x26},
    {"RIGHTARROW", 0x27},
    {"ARROWRIGHT", 0x27},
    {"DOWNARROW", 0x28},
    {"ARROWDOWN", 0x28},
    {"SPACEBAR", 0x32},
    {"PRINTSCREEN", 0x44},
    {"INS", 0x45},
    {"DEL", 0x46},
    {"KP_MULTI", 0x6A},
    {"KP_PLUS", 0x6B},
    {"KP_MINUS", 0x6D},
    {"KP_COMMA", 0x6E},
    {"KP_DIV", 0x6F},
};

const char* keyCodes[] = {
    "LBUTTON",              // 0x01
    "RBUTTON",              // 0x02
    "CANCEL",               // 0x03
    "MBUTTON",              // 0x04
    "XBUTTON1",             // 0x05
    "XBUTTON2",             // 0x06
    "RESERVED_07",          // 0x07
    "BACK",                 // 0x08
    "TAB",                  // 0x09
    "RESERVED",             // 0x0A
    "RESERVED",             // 0x0B
    "CLEAR",                // 0x0C
    "RETURN",               // 0x0D
    "RESERVED",             // 0x0E
    "RESERVED",             // 0x0F
    "SHIFT",                // 0x10
    "CONTROL",              // 0x11
    "MENU",                 // 0x12
    "PAUSE",                // 0x13
    "CAPITAL",              // 0x14
    "KANA",                 // 0x15 
    "IME_ON",               // 0x16
    "JUNJA",                // 0x17
    "FINAL",                // 0x18
    "KANJI",                // 0x19
    "IME_OFF",              // 0x1A
    "ESCAPE",               // 0x1B
    "CONVERT",              // 0x1C
    "NONCONVERT",           // 0x1D
    "ACCEPT",               // 0x1E
    "MODECHANGE",           // 0x1F
    "SPACE",                // 0x20
    "PRIOR",                // 0x21
    "NEXT",                 // 0x22
    "END",                  // 0x23
    "HOME",                 // 0x24
    "LEFT",                 // 0x25
    "UP",                   // 0x26
    "RIGHT",                // 0x27
    "DOWN",                 // 0x28
    "SELECT",               // 0x29
    "PRINT",                // 0x2A
    "EXECUTE",              // 0x2B
    "SNAPSHOT",             // 0x2C
    "INSERT",               // 0x2D
    "DELETE",               // 0x2E
    "HELP",                 // 0x2F
    "0",                    // 0x30
    "1",                    // 0x31
    "2",                    // 0x32
    "3",                    // 0x33
    "4",                    // 0x34
    "5",                    // 0x35
    "6",                    // 0x36
    "7",                    // 0x37
    "8",                    // 0x38
    "9",                    // 0x39
    "RESERVED_3A",          // 0x3A
    "RESERVED_3B",          // 0x3B
    "RESERVED_3C",          // 0x3C
    "RESERVED_3D",          // 0x3D
    "RESERVED_3E",          // 0x3E
    "RESERVED_3F",          // 0x3F
    "RESERVED_40",          // 0x40
    "A",                    // 0x41
    "B",                    // 0x42
    "C",                    // 0x43
    "D",                    // 0x44
    "E",                    // 0x45
    "F",                    // 0x46
    "G",                    // 0x47
    "H",                    // 0x48
    "I",                    // 0x49
    "J",                    // 0x4A
    "K",                    // 0x4B
    "L",                    // 0x4C
    "M",                    // 0x4D
    "N",                    // 0x4E
    "O",                    // 0x4F
    "P",                    // 0x50
    "Q",                    // 0x51
    "R",                    // 0x52
    "S",                    // 0x53
    "T",                    // 0x54
    "U",                    // 0x55
    "V",                    // 0x56
    "W",                    // 0x57
    "X",                    // 0x58
    "Y",                    // 0x59
    "Z",                    // 0x5A
    "LWIN",                 // 0x5B
    "RWIN",                 // 0x5C
    "APPS",                 // 0x5D
    "RESERVED_5E",          // 0x5E
    "SLEEP",                // 0x5F
    "NUMPAD0",              // 0x60
    "NUMPAD1",              // 0x61
    "NUMPAD2",              // 0x62
    "NUMPAD3",              // 0x63
    "NUMPAD4",              // 0x64
    "NUMPAD5",              // 0x65
    "NUMPAD6",              // 0x66
    "NUMPAD7",              // 0x67
    "NUMPAD8",              // 0x68
    "NUMPAD9",              // 0x69
    "MULTIPLY",             // 0x6A
    "ADD",                  // 0x6B
    "SEPARATOR",            // 0x6C
    "SUBTRACT",             // 0x6D
    "DECIMAL",              // 0x6E
    "DIVIDE",               // 0x6F
    "F1",                   // 0x70
    "F2",                   // 0x71
    "F3",                   // 0x72
    "F4",                   // 0x73
    "F5",                   // 0x74
    "F6",                   // 0x75
    "F7",                   // 0x76
    "F8",                   // 0x77
    "F9",                   // 0x78
    "F10",                  // 0x79
    "F11",                  // 0x7A
    "F12",                  // 0x7B
    "F13",                  // 0x7C
    "F14",                  // 0x7D
    "F15",                  // 0x7E
    "F16",                  // 0x7F
    "F17",                  // 0x80
    "F18",                  // 0x81
    "F19",                  // 0x82
    "F20",                  // 0x83
    "F21",                  // 0x84
    "F22",                  // 0x85
    "F23",                  // 0x86
    "F24",                  // 0x87
    "RESERVED_88",          // 0x88
    "RESERVED_89",          // 0x89
    "RESERVED_8A",          // 0x8A
    "RESERVED_8B",          // 0x8B
    "RESERVED_8C",          // 0x8C
    "RESERVED_8D",          // 0x8D
    "RESERVED_8E",          // 0x8E
    "RESERVED_8F",          // 0x8F
    "NUMLOCK",              // 0x90
    "SCROLL",               // 0x91
    "OEM_SPECIFIC_92",      // 0x92
    "OEM_SPECIFIC_93",      // 0x93
    "OEM_SPECIFIC_94",      // 0x94
    "OEM_SPECIFIC_95",      // 0x95
    "OEM_SPECIFIC_96",      // 0x96
    "RESERVED_97",          // 0x97
    "RESERVED_98",          // 0x98
    "RESERVED_99",          // 0x99
    "RESERVED_9A",          // 0x9A
    "RESERVED_9B",          // 0x9B
    "RESERVED_9C",          // 0x9C
    "RESERVED_9D",          // 0x9D
    "RESERVED_9E",          // 0x9E
    "RESERVED_9F",          // 0x9F
    "LSHIFT",               // 0xA0
    "RSHIFT",               // 0xA1
    "LCONTROL",             // 0xA2
    "RCONTROL",             // 0xA3
    "LMENU",                // 0xA4
    "RMENU",                // 0xA5
    "BROWSER_BACK",         // 0xA6
    "BROWSER_FORWARD",      // 0xA7
    "BROWSER_REFRESH",      // 0xA8
    "BROWSER_STOP",         // 0xA9
    "BROWSER_SEARCH",       // 0xAA
    "BROWSER_FAVORITES",    // 0xAB
    "BROWSER_HOME",         // 0xAC
    "VOLUME_MUTE",          // 0xAD
    "VOLUME_DOWN",          // 0xAE
    "VOLUME_UP",            // 0xAF
    "MEDIA_NEXT_TRACK",     // 0xB0
    "MEDIA_PREV_TRACK",     // 0xB1
    "MEDIA_STOP",           // 0xB2
    "MEDIA_PLAY_PAUSE",     // 0xB3
    "LAUNCH_MAIL",          // 0xB4
    "LAUNCH_MEDIA_SELECT",  // 0xB5
    "LAUNCH_APP1",          // 0xB6
    "LAUNCH_APP2",          // 0xB7
    "RESERVED_B8",          // 0xB8
    "RESERVED_B9",          // 0xB9
    "OEM_1",                // 0xBA
    "OEM_PLUS",             // 0xBB
    "OEM_COMMA",            // 0xBC
    "OEM_MINUS",            // 0xBD
    "OEM_PERIOD",           // 0xBE
    "OEM_2",                // 0xBF
    "OEM_3",                // 0xC0
    "ABNT_C1",              // 0xC1
    "ABNT_C2",              // 0xC2
    "RESERVED_C3",          // 0xC3
    "RESERVED_C4",          // 0xC4
    "RESERVED_C5",          // 0xC5
    "RESERVED_C6",          // 0xC6
    "RESERVED_C7",          // 0xC7
    "RESERVED_C8",          // 0xC8
    "RESERVED_C9",          // 0xC9
    "RESERVED_CA",          // 0xCA
    "RESERVED_CB",          // 0xCB
    "RESERVED_CC",          // 0xCC
    "RESERVED_CD",          // 0xCD
    "RESERVED_CE",          // 0xCE
    "RESERVED_CF",          // 0xCF
    "RESERVED_D0",          // 0xD0
    "RESERVED_D1",          // 0xD1
    "RESERVED_D2",          // 0xD2
    "RESERVED_D3",          // 0xD3
    "RESERVED_D4",          // 0xD4
    "RESERVED_D5",          // 0xD5
    "RESERVED_D6",          // 0xD6
    "RESERVED_D7",          // 0xD7
    "RESERVED_D8",          // 0xD8
    "RESERVED_D9",          // 0xD9
    "RESERVED_DA",          // 0xDA
    "OEM_4",                // 0xDB
    "OEM_5",                // 0xDC
    "OEM_6",                // 0xDD
    "OEM_7",                // 0xDE
    "OEM_8",                // 0xDF
    "RESERVED_E0",          // 0xE0
    "OEM_SPECIFIC_E1",      // 0xE1
    "OEM_102",              // 0xE2
    "OEM_SPECIFIC_E3",      // 0xE3
    "OEM_SPECIFIC_E4",      // 0xE4
    "PROCESSKEY",           // 0xE5
    "OEM_SPECIFIC_E6",      // 0xE6
    "PACKET",               // 0xE7
    "RESERVED_E8",          // 0xE8
    "OEM_SPECIFIC_E9",      // 0xE9
    "OEM_SPECIFIC_EA",      // 0xEA
    "OEM_SPECIFIC_EB",      // 0xEB
    "OEM_SPECIFIC_EC",      // 0xEC
    "OEM_SPECIFIC_ED",      // 0xED
    "OEM_SPECIFIC_EE",      // 0xEE
    "OEM_SPECIFIC_EF",      // 0xEF
    "OEM_SPECIFIC_F0",      // 0xF0
    "OEM_SPECIFIC_F1",      // 0xF1
    "OEM_SPECIFIC_F2",      // 0xF2
    "OEM_SPECIFIC_F3",      // 0xF3
    "OEM_SPECIFIC_F4",      // 0xF4
    "OEM_SPECIFIC_F5",      // 0xF5
    "ATTN",                 // 0xF6
    "CRSEL",                // 0xF7
    "EXSEL",                // 0xF8
    "EREOF",                // 0xF9
    "PLAY",                 // 0xFA
    "ZOOM",                 // 0xFB
    "NONAME",               // 0xFC
    "PA1",                  // 0xFD
    "OEM_CLEAR"             // 0xFE
};

BOOL IsValidVK(UINT vkCode)
{
    return (vkCode > 0 && vkCode < 255);
}

BOOL IsExtKey(BYTE vkCode)
{
    BYTE i;
    for (i = 0; i < 12; i++) {
        if(extKeys[i] == vkCode)
            return TRUE;
    }
    return FALSE;
}

char* VKToStr(UINT vkCode, char* out)
{
    if (!IsValidVK(vkCode))
    {
        out[0] = 0;
    }
    else
    {
        strcpy(out, "VK_");
        strcat(out, keyCodes[vkCode-1]);
    }
    return out;
}

BYTE StrToVK(char* vkName)
{
    BYTE i;
    if (!strncmp(vkName, "VK_", 3))
    {
        vkName += 3;
    }
    for (i = 0; i < 254; i++) {
        if(!strcmp(vkName, keyCodes[i]))
            return i+1;
    }
    for (i = 0; i < sizeof(altKeyNames)/sizeof(struct ALT_KEY_NAME); i++)
    {
        if(!strcmp(vkName, altKeyNames[i].name))
            return altKeyNames[i].code;
    }
    return 0;
}

UINT VKToSC(UINT vkCode)
{
    return MapVirtualKeyA(vkCode, 0); // MAPVK_VK_TO_VSC
}

UINT SCToVK(UINT scanCode)
{
    return MapVirtualKeyA(scanCode, 1); // MAPVK_VSC_TO_VK
}

UINT VKToCH(UINT vkCode)
{
    return MapVirtualKeyA(vkCode, 2); // MAPVK_VK_TO_CHAR
}

UINT CHToVK(UINT ch)
{
    return VkKeyScanA(ch);
}


#endif // _KEYCODES_H
