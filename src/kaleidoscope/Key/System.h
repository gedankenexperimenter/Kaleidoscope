// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"
#include <assert.h>


namespace kaleidoscope {

class Key::System {
 private:
  uint16_t keycode_ : 8, type_id_ : 8;
 public:
  byte keycode() const { return keycode_; }

  System() : keycode_ (0),
             type_id_ (Key::system_type_id) {}

  constexpr explicit
  System(byte keycode) : keycode_(keycode),
                         type_id_ (Key::system_type_id) {}

  explicit
  System(Key key) : keycode_ (uint16_t(key)     ),
                    type_id_ (uint16_t(key) >> 8)  {
    // Maybe instead of this assert, we could return cKey::blank if the type_id_ is wrong
    assert(type_id_ == Key::system_type_id);
  }

  constexpr
  operator Key() const {
    return Key { uint16_t( keycode_      |
                           type_id_ << 8   ) };
  }

  static bool testType(Key key) {
    return ((uint16_t(key) >> 8) == Key::system_type_id);
  }
};

} // namespace kaleidoscope {
