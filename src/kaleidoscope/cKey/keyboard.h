// -*- c++ -*-

#pragma once

#include "kaleidoscope/cKey/HIDTables.h"
#include "kaleidoscope/Key.h"


// Keyboard HID mappings
namespace kaleidoscope {

// This namespace is for storing constants of type `Key`. The leading `c` stands for
// `constant` or `const`, so any symbol that begins with `cKey::` can be assumed to be a
// `constexpr Key` object.
namespace cKey {

//namespace Keyboard {

// Reserved (no_event_indicated)
constexpr Key::Keyboard NoEvent { HID_KEYBOARD_NO_EVENT };
constexpr Key::Keyboard ErrorRollover { HID_KEYBOARD_ERROR_ROLLOVER };
constexpr Key::Keyboard PostFail { HID_KEYBOARD_POST_FAIL };
constexpr Key::Keyboard ErrorUndefined { HID_KEYBOARD_ERROR_UNDEFINED };
constexpr Key::Keyboard A { HID_KEYBOARD_A_AND_A };
constexpr Key::Keyboard B { HID_KEYBOARD_B_AND_B };
constexpr Key::Keyboard C { HID_KEYBOARD_C_AND_C };
constexpr Key::Keyboard D { HID_KEYBOARD_D_AND_D };
constexpr Key::Keyboard E { HID_KEYBOARD_E_AND_E };
constexpr Key::Keyboard F { HID_KEYBOARD_F_AND_F };
constexpr Key::Keyboard G { HID_KEYBOARD_G_AND_G };
constexpr Key::Keyboard H { HID_KEYBOARD_H_AND_H };
constexpr Key::Keyboard I { HID_KEYBOARD_I_AND_I };
constexpr Key::Keyboard J { HID_KEYBOARD_J_AND_J };
constexpr Key::Keyboard K { HID_KEYBOARD_K_AND_K };
constexpr Key::Keyboard L { HID_KEYBOARD_L_AND_L };
constexpr Key::Keyboard M { HID_KEYBOARD_M_AND_M };
constexpr Key::Keyboard N { HID_KEYBOARD_N_AND_N };
constexpr Key::Keyboard O { HID_KEYBOARD_O_AND_O };
constexpr Key::Keyboard P { HID_KEYBOARD_P_AND_P };
constexpr Key::Keyboard Q { HID_KEYBOARD_Q_AND_Q };
constexpr Key::Keyboard R { HID_KEYBOARD_R_AND_R };
constexpr Key::Keyboard S { HID_KEYBOARD_S_AND_S };
constexpr Key::Keyboard T { HID_KEYBOARD_T_AND_T };
constexpr Key::Keyboard U { HID_KEYBOARD_U_AND_U };
constexpr Key::Keyboard V { HID_KEYBOARD_V_AND_V };
constexpr Key::Keyboard W { HID_KEYBOARD_W_AND_W };
constexpr Key::Keyboard X { HID_KEYBOARD_X_AND_X };
constexpr Key::Keyboard Y { HID_KEYBOARD_Y_AND_Y };
constexpr Key::Keyboard Z { HID_KEYBOARD_Z_AND_Z };
// Can't use raw digits as identifiers here, so I prepended underscores. I'm not entirely
// happy with this yet. `cKey::_1` is a bit ugly, when there's `cKey::A` for
// comparison. Maybe `cKey::d1` would be better? (`d` for "digit") Or maybe `cKey::_A` for
// symmetry? Either way, it's turning out longer than `Key_A`, but I do think it's much
// clearer with the namespace for constants named after the type name (since C++ won't let
// me have `Key::A`)
constexpr Key::Keyboard _1 { HID_KEYBOARD_1_AND_EXCLAMATION_POINT };
constexpr Key::Keyboard _2 { HID_KEYBOARD_2_AND_AT };
constexpr Key::Keyboard _3 { HID_KEYBOARD_3_AND_POUND };
constexpr Key::Keyboard _4 { HID_KEYBOARD_4_AND_DOLLAR };
constexpr Key::Keyboard _5 { HID_KEYBOARD_5_AND_PERCENT };
constexpr Key::Keyboard _6 { HID_KEYBOARD_6_AND_CARAT };
constexpr Key::Keyboard _7 { HID_KEYBOARD_7_AND_AMPERSAND };
constexpr Key::Keyboard _8 { HID_KEYBOARD_8_AND_ASTERISK };
constexpr Key::Keyboard _9 { HID_KEYBOARD_9_AND_LEFT_PAREN };
constexpr Key::Keyboard _0 { HID_KEYBOARD_0_AND_RIGHT_PAREN };
constexpr Key::Keyboard Enter { HID_KEYBOARD_ENTER };		 // (MARKED AS ENTER_SLASH_RETURN)
constexpr Key::Keyboard Escape { HID_KEYBOARD_ESCAPE };
constexpr Key::Keyboard Backspace { HID_KEYBOARD_DELETE };		// (BACKSPACE)
constexpr Key::Keyboard Tab { HID_KEYBOARD_TAB };
constexpr Key::Keyboard Spacebar { HID_KEYBOARD_SPACEBAR };
constexpr Key::Keyboard Minus { HID_KEYBOARD_MINUS_AND_UNDERSCORE }; // (UNDERSCORE)
constexpr Key::Keyboard Equals { HID_KEYBOARD_EQUALS_AND_PLUS };
constexpr Key::Keyboard LeftBracket { HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE };
constexpr Key::Keyboard RightBracket { HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE };
constexpr Key::Keyboard Backslash { HID_KEYBOARD_BACKSLASH_AND_PIPE };
constexpr Key::Keyboard NonUsPound { HID_KEYBOARD_NON_US_POUND_AND_TILDE };
constexpr Key::Keyboard Semicolon { HID_KEYBOARD_SEMICOLON_AND_COLON };
constexpr Key::Keyboard Quote { HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE };
constexpr Key::Keyboard Backtick { HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE };
constexpr Key::Keyboard Comma { HID_KEYBOARD_COMMA_AND_LESS_THAN };
constexpr Key::Keyboard Period { HID_KEYBOARD_PERIOD_AND_GREATER_THAN };
constexpr Key::Keyboard Slash { HID_KEYBOARD_SLASH_AND_QUESTION_MARK };
constexpr Key::Keyboard CapsLock { HID_KEYBOARD_CAPS_LOCK };
constexpr Key::Keyboard F1 { HID_KEYBOARD_F1 };
constexpr Key::Keyboard F2 { HID_KEYBOARD_F2 };
constexpr Key::Keyboard F3 { HID_KEYBOARD_F3 };
constexpr Key::Keyboard F4 { HID_KEYBOARD_F4 };
constexpr Key::Keyboard F5 { HID_KEYBOARD_F5 };
constexpr Key::Keyboard F6 { HID_KEYBOARD_F6 };
constexpr Key::Keyboard F7 { HID_KEYBOARD_F7 };
constexpr Key::Keyboard F8 { HID_KEYBOARD_F8 };
constexpr Key::Keyboard F9 { HID_KEYBOARD_F9 };
constexpr Key::Keyboard F10 { HID_KEYBOARD_F10 };
constexpr Key::Keyboard F11 { HID_KEYBOARD_F11 };
constexpr Key::Keyboard F12 { HID_KEYBOARD_F12 };
constexpr Key::Keyboard PrintScreen { HID_KEYBOARD_PRINTSCREEN };
constexpr Key::Keyboard ScrollLock { HID_KEYBOARD_SCROLL_LOCK };
constexpr Key::Keyboard Pause { HID_KEYBOARD_PAUSE };
constexpr Key::Keyboard Insert { HID_KEYBOARD_INSERT };
constexpr Key::Keyboard Home { HID_KEYBOARD_HOME };
constexpr Key::Keyboard PageUp { HID_KEYBOARD_PAGE_UP };
constexpr Key::Keyboard Delete { HID_KEYBOARD_DELETE_FORWARD };
constexpr Key::Keyboard End { HID_KEYBOARD_END };
constexpr Key::Keyboard PageDown { HID_KEYBOARD_PAGE_DOWN };
constexpr Key::Keyboard RightArrow { HID_KEYBOARD_RIGHT_ARROW };
constexpr Key::Keyboard LeftArrow { HID_KEYBOARD_LEFT_ARROW };
constexpr Key::Keyboard DownArrow { HID_KEYBOARD_DOWN_ARROW };
constexpr Key::Keyboard UpArrow { HID_KEYBOARD_UP_ARROW };
constexpr Key::Keyboard KeypadNumLock { HID_KEYPAD_NUM_LOCK_AND_CLEAR };
constexpr Key::Keyboard KeypadDivide { HID_KEYPAD_DIVIDE };
constexpr Key::Keyboard KeypadMultiply { HID_KEYPAD_MULTIPLY };
constexpr Key::Keyboard KeypadSubtract { HID_KEYPAD_SUBTRACT };
constexpr Key::Keyboard KeypadAdd { HID_KEYPAD_ADD };
constexpr Key::Keyboard KeypadEnter { HID_KEYPAD_ENTER };
constexpr Key::Keyboard Keypad1 { HID_KEYPAD_1_AND_END };
constexpr Key::Keyboard Keypad2 { HID_KEYPAD_2_AND_DOWN_ARROW };
constexpr Key::Keyboard Keypad3 { HID_KEYPAD_3_AND_PAGE_DOWN };
constexpr Key::Keyboard Keypad4 { HID_KEYPAD_4_AND_LEFT_ARROW };
constexpr Key::Keyboard Keypad5 { HID_KEYPAD_5 };
constexpr Key::Keyboard Keypad6 { HID_KEYPAD_6_AND_RIGHT_ARROW };
constexpr Key::Keyboard Keypad7 { HID_KEYPAD_7_AND_HOME };
constexpr Key::Keyboard Keypad8 { HID_KEYPAD_8_AND_UP_ARROW };
constexpr Key::Keyboard Keypad9 { HID_KEYPAD_9_AND_PAGE_UP };
constexpr Key::Keyboard Keypad0 { HID_KEYPAD_0_AND_INSERT };
constexpr Key::Keyboard KeypadDot { HID_KEYPAD_PERIOD_AND_DELETE };
constexpr Key::Keyboard NonUsBackslashAndPipe { HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE };
constexpr Key::Keyboard PcApplication { HID_KEYBOARD_APPLICATION };
constexpr Key::Keyboard Power { HID_KEYBOARD_POWER };
constexpr Key::Keyboard KeypadEquals { HID_KEYPAD_EQUALS };
constexpr Key::Keyboard F13 { HID_KEYBOARD_F13 };
constexpr Key::Keyboard F14 { HID_KEYBOARD_F14 };
constexpr Key::Keyboard F15 { HID_KEYBOARD_F15 };
constexpr Key::Keyboard F16 { HID_KEYBOARD_F16 };
constexpr Key::Keyboard F17 { HID_KEYBOARD_F17 };
constexpr Key::Keyboard F18 { HID_KEYBOARD_F18 };
constexpr Key::Keyboard F19 { HID_KEYBOARD_F19 };
constexpr Key::Keyboard F20 { HID_KEYBOARD_F20 };
constexpr Key::Keyboard F21 { HID_KEYBOARD_F21 };
constexpr Key::Keyboard F22 { HID_KEYBOARD_F22 };
constexpr Key::Keyboard F23 { HID_KEYBOARD_F23 };
constexpr Key::Keyboard F24 { HID_KEYBOARD_F24 };
constexpr Key::Keyboard Execute { HID_KEYBOARD_EXECUTE };
constexpr Key::Keyboard Help { HID_KEYBOARD_HELP };
constexpr Key::Keyboard Menu { HID_KEYBOARD_MENU };
constexpr Key::Keyboard Select { HID_KEYBOARD_SELECT };
constexpr Key::Keyboard Stop { HID_KEYBOARD_STOP };
constexpr Key::Keyboard Again { HID_KEYBOARD_AGAIN };
constexpr Key::Keyboard Undo { HID_KEYBOARD_UNDO };
constexpr Key::Keyboard Cut { HID_KEYBOARD_CUT };
constexpr Key::Keyboard Copy { HID_KEYBOARD_COPY };
constexpr Key::Keyboard Paste { HID_KEYBOARD_PASTE };
constexpr Key::Keyboard Find { HID_KEYBOARD_FIND };
constexpr Key::Keyboard Mute { HID_KEYBOARD_MUTE };
constexpr Key::Keyboard VolumeUp { HID_KEYBOARD_VOLUME_UP };
constexpr Key::Keyboard VolumeDown { HID_KEYBOARD_VOLUME_DOWN };
constexpr Key::Keyboard LockingCapsLock { HID_KEYBOARD_LOCKING_CAPS_LOCK };
constexpr Key::Keyboard LockingNumLock { HID_KEYBOARD_LOCKING_NUM_LOCK };
constexpr Key::Keyboard LockingScrollLock { HID_KEYBOARD_LOCKING_SCROLL_LOCK };
constexpr Key::Keyboard KeypadComma { HID_KEYPAD_COMMA };
constexpr Key::Keyboard KeypadEqualSign { HID_KEYPAD_EQUAL_SIGN };
constexpr Key::Keyboard International1 { HID_KEYBOARD_INTERNATIONAL1 };
constexpr Key::Keyboard International2 { HID_KEYBOARD_INTERNATIONAL2 };
constexpr Key::Keyboard International3 { HID_KEYBOARD_INTERNATIONAL3 };
constexpr Key::Keyboard International4 { HID_KEYBOARD_INTERNATIONAL4 };
constexpr Key::Keyboard International5 { HID_KEYBOARD_INTERNATIONAL5 };
constexpr Key::Keyboard International6 { HID_KEYBOARD_INTERNATIONAL6 };
constexpr Key::Keyboard International7 { HID_KEYBOARD_INTERNATIONAL7 };
constexpr Key::Keyboard International8 { HID_KEYBOARD_INTERNATIONAL8 };
constexpr Key::Keyboard International9 { HID_KEYBOARD_INTERNATIONAL9 };
constexpr Key::Keyboard Lang1 { HID_KEYBOARD_LANG1 };
constexpr Key::Keyboard Lang2 { HID_KEYBOARD_LANG2 };
constexpr Key::Keyboard Lang3 { HID_KEYBOARD_LANG3 };
constexpr Key::Keyboard Lang4 { HID_KEYBOARD_LANG4 };
constexpr Key::Keyboard Lang5 { HID_KEYBOARD_LANG5 };
constexpr Key::Keyboard Lang6 { HID_KEYBOARD_LANG6 };
constexpr Key::Keyboard Lang7 { HID_KEYBOARD_LANG7 };
constexpr Key::Keyboard Lang8 { HID_KEYBOARD_LANG8 };
constexpr Key::Keyboard Lang9 { HID_KEYBOARD_LANG9 };
constexpr Key::Keyboard AlternateErase { HID_KEYBOARD_ALTERNATE_ERASE };
constexpr Key::Keyboard Sysreq { HID_KEYBOARD_SYSREQ_SLASH_ATTENTION };
constexpr Key::Keyboard Cancel { HID_KEYBOARD_CANCEL };
constexpr Key::Keyboard Clear { HID_KEYBOARD_CLEAR };
constexpr Key::Keyboard Prior { HID_KEYBOARD_PRIOR };
constexpr Key::Keyboard Return { HID_KEYBOARD_RETURN };
constexpr Key::Keyboard Separator { HID_KEYBOARD_SEPARATOR };
constexpr Key::Keyboard Out { HID_KEYBOARD_OUT };
constexpr Key::Keyboard Oper { HID_KEYBOARD_OPER };
constexpr Key::Keyboard ClearSlashAgain { HID_KEYBOARD_CLEAR_SLASH_AGAIN };
constexpr Key::Keyboard CrselSlashProps { HID_KEYBOARD_CRSEL_SLASH_PROPS };
constexpr Key::Keyboard Exsel { HID_KEYBOARD_EXSEL };
// Reserved	0xA5-AF
constexpr Key::Keyboard Keypad00 { HID_KEYPAD_00 };
constexpr Key::Keyboard Keypad000 { HID_KEYPAD_000 };
constexpr Key::Keyboard ThousandsSeparator { HID_THOUSANDS_SEPARATOR };
constexpr Key::Keyboard DecimalSeparator { HID_DECIMAL_SEPARATOR };
constexpr Key::Keyboard CurrencyUnit { HID_CURRENCY_UNIT };
constexpr Key::Keyboard CurrencySubunit { HID_CURRENCY_SUBUNIT };
constexpr Key::Keyboard KeypadLeftParen { HID_KEYPAD_LEFT_PAREN };
constexpr Key::Keyboard KeypadRightParen { HID_KEYPAD_RIGHT_PAREN };
constexpr Key::Keyboard KeypadLeftCurlyBrace { HID_KEYPAD_LEFT_CURLY_BRACE };
constexpr Key::Keyboard KeypadRightCurlyBrace { HID_KEYPAD_RIGHT_CURLY_BRACE };
constexpr Key::Keyboard KeypadTab { HID_KEYPAD_TAB };
constexpr Key::Keyboard KeypadBackspace { HID_KEYPAD_BACKSPACE };
constexpr Key::Keyboard KeypadA { HID_KEYPAD_A };
constexpr Key::Keyboard KeypadB { HID_KEYPAD_B };
constexpr Key::Keyboard KeypadC { HID_KEYPAD_C };
constexpr Key::Keyboard KeypadD { HID_KEYPAD_D };
constexpr Key::Keyboard KeypadE { HID_KEYPAD_E };
constexpr Key::Keyboard KeypadF { HID_KEYPAD_F };
constexpr Key::Keyboard KeypadXor { HID_KEYPAD_XOR };
constexpr Key::Keyboard KeypadCarat { HID_KEYPAD_CARAT };
constexpr Key::Keyboard KeypadPercent { HID_KEYPAD_PERCENT };
constexpr Key::Keyboard KeypadLessThan { HID_KEYPAD_LESS_THAN };
constexpr Key::Keyboard KeypadGreaterThan { HID_KEYPAD_GREATER_THAN };
constexpr Key::Keyboard KeypadAmpersand { HID_KEYPAD_AMPERSAND };
constexpr Key::Keyboard KeypadDoubleampersand { HID_KEYPAD_DOUBLEAMPERSAND };
constexpr Key::Keyboard KeypadPipe { HID_KEYPAD_PIPE };
constexpr Key::Keyboard KeypadDoublepipe { HID_KEYPAD_DOUBLEPIPE };
constexpr Key::Keyboard KeypadColon { HID_KEYPAD_COLON };
constexpr Key::Keyboard KeypadPoundSign { HID_KEYPAD_POUND_SIGN };
constexpr Key::Keyboard KeypadSpace { HID_KEYPAD_SPACE };
constexpr Key::Keyboard KeypadAtSign { HID_KEYPAD_AT_SIGN };
constexpr Key::Keyboard KeypadExclamationPoint { HID_KEYPAD_EXCLAMATION_POINT };
constexpr Key::Keyboard KeypadMemoryStore { HID_KEYPAD_MEMORY_STORE };
constexpr Key::Keyboard KeypadMemoryRecall { HID_KEYPAD_MEMORY_RECALL };
constexpr Key::Keyboard KeypadMemoryClear { HID_KEYPAD_MEMORY_CLEAR };
constexpr Key::Keyboard KeypadMemoryAdd { HID_KEYPAD_MEMORY_ADD };
constexpr Key::Keyboard KeypadMemorySubtract { HID_KEYPAD_MEMORY_SUBTRACT };
constexpr Key::Keyboard KeypadMemoryMultiply { HID_KEYPAD_MEMORY_MULTIPLY };
constexpr Key::Keyboard KeypadMemoryDivide { HID_KEYPAD_MEMORY_DIVIDE };
constexpr Key::Keyboard KeypadPlusSlashMinus { HID_KEYPAD_PLUS_SLASH_MINUS };
constexpr Key::Keyboard KeypadClear { HID_KEYPAD_CLEAR };
constexpr Key::Keyboard KeypadClearEntry { HID_KEYPAD_CLEAR_ENTRY };
constexpr Key::Keyboard KeypadBinary { HID_KEYPAD_BINARY };
constexpr Key::Keyboard KeypadOctal { HID_KEYPAD_OCTAL };
constexpr Key::Keyboard KeypadDecimal { HID_KEYPAD_DECIMAL };
constexpr Key::Keyboard KeypadHexadecimal { HID_KEYPAD_HEXADECIMAL };

constexpr Key::Keyboard LeftControl { HID_KEYBOARD_LEFT_CONTROL };
constexpr Key::Keyboard LeftShift { HID_KEYBOARD_LEFT_SHIFT };
constexpr Key::Keyboard LeftAlt { HID_KEYBOARD_LEFT_ALT };
constexpr Key::Keyboard LeftGui { HID_KEYBOARD_LEFT_GUI };
constexpr Key::Keyboard RightControl { HID_KEYBOARD_RIGHT_CONTROL };
constexpr Key::Keyboard RightShift { HID_KEYBOARD_RIGHT_SHIFT };
constexpr Key::Keyboard RightAlt { HID_KEYBOARD_RIGHT_ALT };
constexpr Key::Keyboard RightGui ( HID_KEYBOARD_RIGHT_GUI, 0, false );

//} // namespace Keyboard {

// Aliases for modifier keys
constexpr Key::Keyboard l_ctl = LeftControl;
constexpr Key::Keyboard l_sft = LeftShift;
constexpr Key::Keyboard l_alt = LeftAlt;
constexpr Key::Keyboard l_gui = LeftGui;
constexpr Key::Keyboard r_ctl = RightControl;
constexpr Key::Keyboard r_sft = RightShift;
constexpr Key::Keyboard r_alt = RightAlt;
constexpr Key::Keyboard r_gui = RightGui;

// Aliases for macOS
constexpr Key::Keyboard l_opt = LeftAlt;
constexpr Key::Keyboard l_cmd = LeftGui;
constexpr Key::Keyboard r_opt = RightAlt;
constexpr Key::Keyboard r_cmd = RightGui;

// Aliases for Windows
constexpr Key::Keyboard l_win = LeftGui;
constexpr Key::Keyboard r_win = RightGui;

constexpr Key::Keyboard first_modifier = LeftControl;
constexpr Key::Keyboard last_modifier  = RightGui;

} // namespace cKey {

} // namespace kaleidoscope {
