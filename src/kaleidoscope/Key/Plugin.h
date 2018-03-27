// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"


namespace kaleidoscope {

class Key::Plugin {
 private:
  uint16_t data_ : 14, type_id_ : 2;
 public:
  uint16_t data() const { return data_; }

  static bool testType(Key key) {
    return ((uint16_t(key) >> 14) == Key::plugin_type_id);
  }
};
} // namespace kaleidoscope {

