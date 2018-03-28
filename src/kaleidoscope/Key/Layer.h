// -*- c++ -*-

#pragma once

#include "kaleidoscope/Key.h"
#include <assert.h>


namespace kaleidoscope {

class Key::Layer {

 private:
  uint16_t index_ : 6, shift_ : 1, move_ : 1, reserved_ : 2, type_id_ : 6;

 public:
  byte index() const { return index_; }
  bool isLayerShift() const { return shift_; }
  bool isLayerMove() const { return move_; }

  Layer() : index_(0), shift_(false), move_(false), reserved_(0),
            type_id_(Key::layer_type_id) {}

  constexpr explicit
  Layer(byte index, bool shift = false, bool move = false)
      : index_(index), shift_(shift), move_(move), reserved_(0),
        type_id_(Key::layer_type_id) {}

  explicit
  Layer(Key key) : index_    (uint16_t(key)                   ),
                   shift_    (uint16_t(key) >>  6             ),
                   move_     (uint16_t(key) >> (6 + 1)        ),
                   reserved_ (uint16_t(key) >> (6 + 1 + 1)    ),
                   type_id_  (uint16_t(key) >> (6 + 1 + 1 + 2)) {
    assert(type_id_ == Key::layer_type_id);
  }

  constexpr
  operator Key() const {
    return Key ( index_                      |
                 shift_    <<  6             |
                 move_     << (6 + 1)        |
                 reserved_ << (6 + 1 + 1)    |
                 type_id_  << (6 + 1 + 1 + 2) );
  }

  static bool testType(Key key) {
    return ((uint16_t(key) >> (6 + 1 + 1 + 2)) == Key::layer_type_id);
  }
};

} // namespace kaleidoscope {
