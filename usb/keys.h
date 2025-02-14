#define KEY_CTRL		0xE0
#define KEY_SHIFT		0xE1
#define KEY_ALT			0xE2
#define KEY_GUI			0xE3
#define KEY_LEFT_CTRL	0xE0
#define KEY_LEFT_SHIFT	0xE1
#define KEY_LEFT_ALT	0xE2
#define KEY_LEFT_GUI	0xE3
#define KEY_RIGHT_CTRL	0xE4
#define KEY_RIGHT_SHIFT	0xE5
#define KEY_RIGHT_ALT	0xE6
#define KEY_RIGHT_GUI	0xE7

#define KEY_A			4
#define KEY_B			5
#define KEY_C			6
#define KEY_D			7
#define KEY_E			8
#define KEY_F			9
#define KEY_G			10
#define KEY_H			11
#define KEY_I			12
#define KEY_J			13
#define KEY_K			14
#define KEY_L			15
#define KEY_M			16
#define KEY_N			17
#define KEY_O			18
#define KEY_P			19
#define KEY_Q			20
#define KEY_R			21
#define KEY_S			22
#define KEY_T			23
#define KEY_U			24
#define KEY_V			25
#define KEY_W			26
#define KEY_X			27
#define KEY_Y			28
#define KEY_Z			29
#define KEY_1			30
#define KEY_2			31
#define KEY_3			32
#define KEY_4			33
#define KEY_5			34
#define KEY_6			35
#define KEY_7			36
#define KEY_8			37
#define KEY_9			38
#define KEY_0			39
#define KEY_ENTER		40
#define KEY_ESC			41
#define KEY_BACKSPACE	42
#define KEY_TAB			43
#define KEY_SPACE		44
#define KEY_MINUS		45
#define KEY_EQUAL		46
#define KEY_LEFT_BRACE	47
#define KEY_RIGHT_BRACE	48
#define KEY_BACKSLASH	49
#define KEY_NUMBER		50
#define KEY_SEMICOLON	51
#define KEY_QUOTE		52
#define KEY_TILDE		53
#define KEY_COMMA		54
#define KEY_PERIOD		55
#define KEY_SLASH		56
#define KEY_CAPS_LOCK	57
#define KEY_F1			58
#define KEY_F2			59
#define KEY_F3			60
#define KEY_F4			61
#define KEY_F5			62
#define KEY_F6			63
#define KEY_F7			64
#define KEY_F8			65
#define KEY_F9			66
#define KEY_F10			67
#define KEY_F11			68
#define KEY_F12			69
#define KEY_PRINTSCREEN	70
#define KEY_SCROLL_LOCK	71
#define KEY_PAUSE		72
#define KEY_INSERT		73
#define KEY_HOME		74
#define KEY_PAGE_UP		75
#define KEY_DELETE		76
#define KEY_END			77
#define KEY_PAGE_DOWN	78
#define KEY_RIGHT		79
#define KEY_LEFT		80
#define KEY_DOWN		81
#define KEY_UP			82
#define KEY_NUM_LOCK	83
#define KEYPAD_SLASH	84
#define KEYPAD_ASTERISK	85
#define KEYPAD_MINUS	86
#define KEYPAD_PLUS		87
#define KEYPAD_ENTER	88
#define KEYPAD_1		89
#define KEYPAD_2		90
#define KEYPAD_3		91
#define KEYPAD_4		92
#define KEYPAD_5		93
#define KEYPAD_6		94
#define KEYPAD_7		95
#define KEYPAD_8		96
#define KEYPAD_9		97
#define KEYPAD_0		98
#define KEYPAD_PERIOD	99
#define KEY_APP			101
#define KEYPAD_EQUAL	103

//SPECIAL - may or may not work
#define KEYPAD_COMMA	133
#define LOCKING_CAPS	130

//Media key codes are not real scan codes, they must be translated to a 16
//bit number using a lookup table which is defined below
//
//NEEDS TO BE DEFINED IN ORDER OF THE ENTRIES IN THE CONSUMER_LOOKUP ARRAY
//you can find that array in usb_keyboard.h
#define PLAY_PAUSE		0x00
#define STOP			0x01
#define PREV_TRACK		0x02
#define NEXT_TRACK		0x03
#define MUTE			0x04
#define VOL_UP			0x05
#define VOL_DOWN		0x06

//renamed for convenience
#define LCTRL KEY_LEFT_CTRL
#define RCTRL KEY_RIGHT_CTRL

#define LSHIFT KEY_LEFT_SHIFT
#define RSHIFT KEY_RIGHT_SHIFT

#define LEFT_ALT KEY_LEFT_ALT
#define RIGHT_ALT KEY_RIGHT_ALT

#define LEFT_GUI KEY_LEFT_GUI
#define RIGHT_GUI KEY_RIGHT_GUI

#define PAGE_UP KEY_PAGE_UP
#define PAGE_DOWN KEY_PAGE_DOWN

#define LBRACE KEY_LEFT_BRACE
#define RBRACE KEY_RIGHT_BRACE

#define ENTER KEY_ENTER
#define KEY_SEMI KEY_SEMICOLON
#define PERIOD KEY_PERIOD
#define KP_PERIOD KEYPAD_PERIOD
#define COMMA KEY_COMMA
#define BACKSPACE KEY_BACKSPACE
#define DEL KEY_DELETE
#define BACKSLASH KEY_BACKSLASH
#define NUMLOCK KEY_NUM_LOCK
#define CAPS KEY_CAPS_LOCK
#define PRTSCN KEY_PRINTSCREEN

#define KEYPAD_AST KEYPAD_ASTERISK
#define KEYPAD_MIN KEYPAD_MINUS
#define KEYPAD_PLS KEYPAD_PLUS
#define KEYPAD_ENT KEYPAD_ENTER
#define KEYPAD_PRD KEYPAD_PERIOD
#define KEYPAD_SLH KEYPAD_SLASH
#define KEYPAD_EQL KEYPAD_EQUAL

// special
#define KEYPAD_COM KEYPAD_COMMA
#define LOCKING_C LOCKING_CAPS
#define KEY_F13		104
#define KEY_F14		105
#define KEY_F15		106
#define KEY_F16		107
#define KEY_F17		108
#define KEY_F18		109
#define KEY_F19		110
#define KEY_F20		111
#define KEY_F21		112
#define KEY_F22		113
#define KEY_F23		114
#define KEY_F24		115
