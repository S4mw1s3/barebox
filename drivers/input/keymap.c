#include <linux/types.h>
#include <input/keyboard.h>

#include <dt-bindings/input/input.h>
#include <readkey.h>

uint8_t keycode_bb_keys[NR_KEYS] = {
	[KEY_RESERVED] =	0xff,
	[KEY_ESC] =		0x1b,
	[KEY_1] =		'1',
	[KEY_2] =		'2',
	[KEY_3] =		'3',
	[KEY_4] =		'4',
	[KEY_5] =		'5',
	[KEY_6] =		'6',
	[KEY_7] =		'7',
	[KEY_8] =		'8',
	[KEY_9] =		'9',
	[KEY_0] =		'0',
	[KEY_MINUS] =		'-',
	[KEY_EQUAL] =		'=',
	[KEY_BACKSPACE] =	0xff,
	[KEY_TAB] =		'\t',
	[KEY_Q] =		'q',
	[KEY_W] =		'w',
	[KEY_E] =		'e',
	[KEY_R] =		'r',
	[KEY_T] =		't',
	[KEY_Y] =		'y',
	[KEY_U] =		'u',
	[KEY_I] =		'i',
	[KEY_O] =		'o',
	[KEY_P] =		'p',
	[KEY_LEFTBRACE] =	'(',
	[KEY_RIGHTBRACE] =	')',
	[KEY_ENTER] =		'\n',
	[KEY_LEFTCTRL] =	0xff,
	[KEY_A] =		'a',
	[KEY_S] =		's',
	[KEY_D] =		'd',
	[KEY_F] =		'f',
	[KEY_G] =		'g',
	[KEY_H] =		'h',
	[KEY_J] =		'j',
	[KEY_K] =		'k',
	[KEY_L] =		'l',
	[KEY_SEMICOLON] =	';',
	[KEY_APOSTROPHE] =	0xff,
	[KEY_GRAVE] =		'^',
	[KEY_LEFTSHIFT] =	0xff,
	[KEY_BACKSLASH] =	0xff,
	[KEY_Z] =		'z',
	[KEY_X] =		'x',
	[KEY_C] =		'c',
	[KEY_V] =		'v',
	[KEY_B] =		'b',
	[KEY_N] =		'n',
	[KEY_M] =		'm',
	[KEY_COMMA] =		',',
	[KEY_DOT] =		'.',
	[KEY_SLASH] =		'/',
	[KEY_RIGHTSHIFT] =	0xff,
	[KEY_KPASTERISK] =	0xff,
	[KEY_LEFTALT] =		0xff,
	[KEY_SPACE] =		' ',
	[KEY_CAPSLOCK] =	0xff,
	[KEY_F1] =		0xff,
	[KEY_F2] =		0xff,
	[KEY_F3] =		0xff,
	[KEY_F4] =		0xff,
	[KEY_F5] =		0xff,
	[KEY_F6] =		0xff,
	[KEY_F7] =		0xff,
	[KEY_F8] =		0xff,
	[KEY_F9] =		0xff,
	[KEY_F10] =		0xff,
	[KEY_NUMLOCK] =		0xff,
	[KEY_SCROLLLOCK] =	0xff,
	[KEY_KP7] =		0xff,
	[KEY_KP8] =		0xff,
	[KEY_KP9] =		0xff,
	[KEY_KPMINUS] =		0xff,
	[KEY_KP4] =		0xff,
	[KEY_KP5] =		0xff,
	[KEY_KP6] =		0xff,
	[KEY_KPPLUS] =		0xff,
	[KEY_KP1] =		0xff,
	[KEY_KP2] =		0xff,
	[KEY_KP3] =		0xff,
	[KEY_KP0] =		0xff,
	[KEY_KPDOT] =		0xff,
	[KEY_ZENKAKUHANKAKU] =	0xff,
	[KEY_102ND] =		0xff,
	[KEY_F11] =		0xff,
	[KEY_F12] =		0xff,
	[KEY_RO] =		0xff,
	[KEY_KATAKANA] =	0xff,
	[KEY_HIRAGANA] =	0xff,
	[KEY_HENKAN] =		0xff,
	[KEY_KATAKANAHIRAGANA] =0xff,
	[KEY_MUHENKAN] =	0xff,
	[KEY_KPJPCOMMA] =	0xff,
	[KEY_KPENTER] =		0xff,
	[KEY_RIGHTCTRL] =	0xff,
	[KEY_KPSLASH] =		0xff,
	[KEY_SYSRQ] =		0xff,
	[KEY_RIGHTALT] =	0xff,
	[KEY_LINEFEED] =	0xff,
	[KEY_HOME] =		0xff,
	[KEY_UP] =		BB_KEY_UP,
	[KEY_PAGEUP] =		BB_KEY_PAGEUP,
	[KEY_LEFT] =		BB_KEY_LEFT,
	[KEY_RIGHT] =		BB_KEY_RIGHT,
	[KEY_END] =		BB_KEY_END,
	[KEY_DOWN] =		BB_KEY_DOWN,
	[KEY_PAGEDOWN] =	BB_KEY_PAGEDOWN,
	[KEY_INSERT] =		BB_KEY_INSERT,
	[KEY_DELETE] =		BB_KEY_DEL7,
	[KEY_MACRO] =		0xff,
	[KEY_MUTE] =		0xff,
	[KEY_VOLUMEDOWN] =	0xff,
	[KEY_VOLUMEUP] =	0xff,
	[KEY_POWER] =		0xff,
	[KEY_KPEQUAL] =		0xff,
	[KEY_KPPLUSMINUS] =	0xff,
	[KEY_PAUSE] =		0xff,
	[KEY_SCALE] =		0xff,
	[KEY_KPCOMMA] =		0xff,
	[KEY_HANGEUL] =		0xff,
	[KEY_HANGUEL] =		KEY_HANGEUL,
	[KEY_HANJA] =		0xff,
	[KEY_YEN] =		0xff,
	[KEY_LEFTMETA] =	0xff,
	[KEY_RIGHTMETA] =	0xff,
	[KEY_COMPOSE] =		0xff,
};