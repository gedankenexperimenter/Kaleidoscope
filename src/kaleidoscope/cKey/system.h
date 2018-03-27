// -*- c++ -*-

#pragma once

#include "HIDTables.h"
#include "kaleidoscope/Key.h"


namespace kaleidoscope {

// This namespace is for storing constants of type `Key`. The leading `c` stands for
// `constant` or `const`
namespace cKey {

namespace System {

constexpr Key::System PowerDown { HID_SYSTEM_POWER_DOWN };
constexpr Key::System Sleep { HID_SYSTEM_SLEEP };
constexpr Key::System WakeUp { HID_SYSTEM_WAKE_UP };
constexpr Key::System ContextMenu { HID_SYSTEM_CONTEXT_MENU };
constexpr Key::System MainMenu { HID_SYSTEM_MAIN_MENU };
constexpr Key::System AppMenu { HID_SYSTEM_APP_MENU };
constexpr Key::System MenuHelp { HID_SYSTEM_MENU_HELP };
constexpr Key::System MenuExit { HID_SYSTEM_MENU_EXIT };
constexpr Key::System MenuSelect { HID_SYSTEM_MENU_SELECT };
constexpr Key::System MenuRight { HID_SYSTEM_MENU_RIGHT };
constexpr Key::System MenuLeft { HID_SYSTEM_MENU_LEFT };
constexpr Key::System MenuUp { HID_SYSTEM_MENU_UP };
constexpr Key::System MenuDown { HID_SYSTEM_MENU_DOWN };
constexpr Key::System ColdRestart { HID_SYSTEM_COLD_RESTART };
constexpr Key::System WarmRestart { HID_SYSTEM_WARM_RESTART };
constexpr Key::System DPadUp { HID_D_PAD_UP };
constexpr Key::System DPadDown { HID_D_PAD_DOWN };
constexpr Key::System DPadRight { HID_D_PAD_RIGHT };
constexpr Key::System DPadLeft { HID_D_PAD_LEFT };

constexpr Key::System Dock { HID_SYSTEM_DOCK };
constexpr Key::System Undock { HID_SYSTEM_UNDOCK };
constexpr Key::System Setup { HID_SYSTEM_SETUP };
constexpr Key::System Break { HID_SYSTEM_BREAK };
constexpr Key::System DebuggerBreak { HID_SYSTEM_DEBUGGER_BREAK };
constexpr Key::System ApplicationBreak { HID_APPLICATION_BREAK };
constexpr Key::System ApplicationDebuggerBreak { HID_APPLICATION_DEBUGGER_BREAK };
constexpr Key::System SpeakerMute { HID_SYSTEM_SPEAKER_MUTE };
constexpr Key::System Hibernate { HID_SYSTEM_HIBERNATE };

constexpr Key::System DisplayInvert { HID_SYSTEM_DISPLAY_INVERT };
constexpr Key::System DisplayInternal { HID_SYSTEM_DISPLAY_INTERNAL };
constexpr Key::System DisplayExternal { HID_SYSTEM_DISPLAY_EXTERNAL };
constexpr Key::System DisplayBoth { HID_SYSTEM_DISPLAY_BOTH };
constexpr Key::System DisplayDual { HID_SYSTEM_DISPLAY_DUAL };
constexpr Key::System DisplayToggleIntSlashExt { HID_SYSTEM_DISPLAY_TOGGLE_INT_SLASH_EXT };
constexpr Key::System DisplaySwapPrimarySlashSecondary { HID_SYSTEM_DISPLAY_SWAP_PRIMARY_SLASH_SECONDARY };
constexpr Key::System DisplayLCDAutoscale { HID_SYSTEM_DISPLAY_LCD_AUTOSCALE };

} // namespace consumer {

} // namespace cKey {

} // namespace kaleidoscope {
