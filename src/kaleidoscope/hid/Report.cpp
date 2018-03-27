// -*- c++ -*-

#include "kaleidoscope/hid/Report.h"

#include <Arduino.h>
#include <KeyboardioHID.h>

#include "kaleidoscope/Key.h"
#include "kaleidoscope/cKey.h"


// This version uses KeyboardioHID, not the rewrite

namespace kaleidoscope {
namespace hid {
namespace keyboard {

// These can't be done in the constructor because of the Static Initialization Order
// Fiasco -- one of many reasons I want to rewrite KeyboardioHID
void Report::init() {
  ::Keyboard.begin();
  ::ConsumerControl.begin();
  ::SystemControl.begin();
  clear();
}

void Report::clear() {
  ::Keyboard.releaseAll();
  ::ConsumerControl.releaseAll();
  //nkro_keyboard_ = (BootKeyboard.getProtocol() != HID_BOOT_PROTOCOL);
}

void Report::add(Key key, byte mod_flags_allowed) {
  if (key == cKey::clear)
    return;

  switch (key.type()) {

    case KeyType::keyboard:
      {
        Key::Keyboard keyboard_key{key};
        byte modifiers = keyboard_key.modifiers();
        byte keycode = keyboard_key.keycode();
        byte mod_keycode = cKey::first_modifier.keycode();
        if (keycode < mod_keycode && keycode > 0)
          modifiers = modifiers & mod_flags_allowed;
        while (modifiers != 0) {
          if (modifiers & 1)
            ::Keyboard.press(mod_keycode);
          mod_keycode += 1;
          modifiers >>= 1;
        }
        ::Keyboard.press(keyboard_key.keycode());
        return;
      }

    case KeyType::consumer:
      // This uses the CONSUMER preprocessor macro
      ::ConsumerControl.press(Key::Consumer(key).keycode());
      return;

    case KeyType::system:
      // System Control is different; press() sends immediately
      ::SystemControl.press(Key::System(key).keycode());
      return;

    default:
      return;
  }
}

// This function must be used very carefully; the caller isn't necessarily the only one to
// have added the keycode in question, and removing it could break other plugins'
// assumptions
void Report::remove(Key key) {
  if (key.isEmpty())
    return;

  switch (key.type()) {

    case KeyType::keyboard:
      // Here we don't want to remove modifier flags, because they could have been added
      // by other keys (or plugins)
      ::Keyboard.release(Key::Keyboard(key).keycode());
      return;

    case KeyType::consumer:
      // This uses the CONSUMER preprocessor macro
      ::ConsumerControl.release(Key::Consumer(key).keycode());
      return;

    case KeyType::system:
      // System Control is different; release() sends immediately, and there's only one
      // keycode at a time
      ::SystemControl.release();
      return;

    case KeyType::layer:
      return;

    default:
      return;
  }
}

void Report::send() {
  ::Keyboard.sendReport();
  ::ConsumerControl.sendReport();
}

//byte Report::activeMods() {}

byte Report::hostLedStates() const {
  return ::Keyboard.getLEDs();
}

} // namespace keyboard {
} // namespace hid {
} // namespace kaleidoscope {
