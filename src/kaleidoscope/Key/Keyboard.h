// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"
#include <assert.h>


namespace kaleidoscope {

class Key::Keyboard {

 private:
  uint16_t keycode_ : 8, mods_ : 4, mods_right_ : 1, type_id_ : 3;

  // These mod bits are in the same order as the mod bits in the HID keyboard report for
  // efficiency in passing them on. If they get rearranged, that will mess things up.
  static constexpr byte mod_control { 0b0001 };  // (1 << 0)
  static constexpr byte mod_shift   { 0b0010 };  // (1 << 1)
  static constexpr byte mod_alt     { 0b0100 };  // (1 << 2)
  static constexpr byte mod_gui     { 0b1000 };  // (1 << 3)

 public:
  constexpr
  byte keycode() const { return keycode_; }
  byte modifiers() const;
  bool isModifier() const;
  void addModifier(Key key);
  void setModifiers(byte mods, bool mods_right = false);
  void addModifiers(byte mods, bool mods_right = false);
  void clearModifiers() {
    setModifiers(0);
  }

  // Run-time constructor; generates and empty Key (equal to cKey::blank)
  Keyboard() : keycode_    (0),
               mods_       (0),
               mods_right_ (false),
               type_id_    (Key::keyboard_type_id) {}

  // The primary constructor; sets all bit fields in the structure. This is what is used
  // to define Key::Keyboard compile-time constants.
  constexpr explicit
  Keyboard(byte keycode, byte mods = 0, bool mods_right = false)
      : keycode_(keycode), mods_(mods), mods_right_(mods_right),
        type_id_(Key::keyboard_type_id) {}

  // Conversion from Key object. The caller should first verify that it's got the
  // correct type of Key object before calling this constructor.
  explicit
  Keyboard(Key key) : keycode_    (uint16_t(key)               ),
                      mods_       (uint16_t(key) >>  8         ),
                      mods_right_ (uint16_t(key) >> (8 + 4)    ),
                      type_id_    (uint16_t(key) >> (8 + 4 + 1))  {
    assert(type_id_ == Key::keyboard_type_id);
  }

  // Cast operator to convert Key::Keyboard objects to plain Key objects
  constexpr
  operator Key() const {
    return Key( keycode_                   |
                mods_       <<  8          |
                mods_right_ << (8 + 4)     |
                type_id_    << (8 + 4 + 1)   );
  }

  static constexpr bool testType(Key key) {
    return ((uint16_t(key) >> (8 + 4 + 1)) == Key::keyboard_type_id);
  }
};

} // namespace kaleidoscope {
