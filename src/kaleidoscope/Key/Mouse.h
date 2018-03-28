// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"


namespace kaleidoscope {

class Key::Mouse {
 private:
  uint16_t keycode_ : 8, type_id_ : 8;
 public:
  byte keycode() const { return keycode_; }

  Mouse() : keycode_ (0),
            type_id_ (Key::mouse_type_id) {}

  constexpr explicit
  Mouse(byte keycode) : keycode_ (keycode),
                        type_id_ (Key::mouse_type_id) {}

  explicit
  Mouse(Key key) : keycode_ (uint16_t(key)     ),
                   type_id_ (uint16_t(key) << 8)  {
    assert(type_id_ == Key::mouse_type_id);
  }

  constexpr
  operator Key() const {
    return Key( keycode_      |
                type_id_ << 8   );
  }

  static bool testType(Key key) {
    return ((uint16_t(key) >> 8) == Key::mouse_type_id);
  }
};

} // namespace kaleidoscope {
