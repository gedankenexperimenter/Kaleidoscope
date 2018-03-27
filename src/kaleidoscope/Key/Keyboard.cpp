// -*- c++ -*-

#include "kaleidoscope/Key/Keyboard.h"
#include "kaleidoscope/cKey.h"


namespace kaleidoscope {

byte Key::Keyboard::modifiers() const {
  byte modifiers = mods_;
  // If the fifth bit (mods_right_) is set, that means we have to shift the mods four bits
  // to match the right-hand modifier bits in the HID report modifiers byte.
  if (mods_right_)
    modifiers <<= 4;
  return modifiers;
}

// `cKey::first_modifier` should probably be `cKey::Keyboard::first_modifier`
bool Key::Keyboard::isModifier() const {
  return (keycode_ >= cKey::first_modifier.keycode_ &&
          keycode_ <= cKey::last_modifier.keycode_     );
}

void Key::Keyboard::addModifier(Key key) {
  assert(testType(key) && Key::Keyboard(key).isModifier());
  byte mod_bit = Key::Keyboard(key).keycode_ - cKey::first_modifier.keycode_;
  if (mod_bit > 4) {
    mod_bit -= 4;
    mods_right_ = true;
  }
  mods_ |= (1 << mod_bit);
}

void Key::Keyboard::setModifiers(byte mods, bool mods_right) {
  mods_       = mods;
  mods_right_ = mods_right;
}

void Key::Keyboard::addModifiers(byte mods, bool mods_right) {
  mods_       |= mods;
  mods_right_ |= mods_right;
}

} // namespace kaleidoscope {
