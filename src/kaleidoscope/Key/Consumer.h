// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"


namespace kaleidoscope {

class Key::Consumer {
 private:
  uint16_t keycode_ : 10, type_id_ : 6;

 public:
  uint16_t keycode() const { return keycode_; }
  //void keycode(uint16_t keycode);

  Consumer() : keycode_ (0), type_id_ (Key::consumer_type_id) {}

  constexpr explicit
  Consumer(uint16_t keycode) : keycode_(keycode),
                               type_id_(Key::consumer_type_id) {}
  explicit
  Consumer(Key key) : keycode_(uint16_t(key)),
                      type_id_(Key::consumer_type_id) {}
  constexpr
  operator Key() const {
    return Key( keycode_ |
                type_id_ << 10);
  }

  static bool testType(Key key) {
    return ((uint16_t(key) >> 10) == Key::consumer_type_id);
  }
};

} // namespace kaleidoscope {
