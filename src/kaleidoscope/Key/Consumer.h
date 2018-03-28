// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"
#include <assert.h>


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
  Consumer(Key key) : keycode_(uint16_t(key)      ),
                      type_id_(uint16_t(key) << 10)  {
    assert(type_id_ == Key::consumer_type_id);
  }
  // Consumer(Key key) {
  //   *this = static_cast<Consumer>(key);
  // }

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
