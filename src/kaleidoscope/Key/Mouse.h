// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"


namespace kaleidoscope {

class Key::Mouse {
 private:
  uint16_t keycode_ : 8, type_id_ : 8;
 public:
  byte keycode() const { return keycode_; }

  static bool testType(Key key) {
    return ((uint16_t(key) >> 8) == Key::mouse_type_id);
  }
};

} // namespace kaleidoscope {

