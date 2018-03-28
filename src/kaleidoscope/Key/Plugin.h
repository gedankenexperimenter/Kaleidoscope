// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"
#include <assert.h>


namespace kaleidoscope {

class Key::Plugin {

 private:
  uint16_t data_ : 14, type_id_ : 2;

 public:
  uint16_t data() const { return data_; }

  Plugin() : data_ (0),
             type_id_ (Key::plugin_type_id) {}

  constexpr explicit
  Plugin(byte data) : data_    (data),
                      type_id_ (Key::plugin_type_id) {}

  explicit
  Plugin(Key key) : data_    (uint16_t(key)      ),
                    type_id_ (uint16_t(key) >> 14)  {
    assert(type_id_ == Key::plugin_type_id);
  }

  constexpr
  operator Key() const {
    return Key( data_          |
                type_id_ << 14   );
  }

  static bool testType(Key key) {
    return ((uint16_t(key) >> 14) == Key::plugin_type_id);
  }
};

} // namespace kaleidoscope {
