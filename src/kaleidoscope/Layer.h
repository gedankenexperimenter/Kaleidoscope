// -*- c++ -*-

#pragma once

#include <Arduino.h>

#include KALEIDOSCOPE_HARDWARE_H
#include KALEIDOSCOPE_KEYADDR_H
#include "kaleidoscope/Key.h"
#include "kaleidoscope/KeymapEntry.h"


namespace kaleidoscope {


class Layer {

 public:
  Layer() = default;
  constexpr Layer(const Key* const keys, const byte count)
    : keys_{keys}, key_count_{count} {}

  Key operator[](KeyAddr k) const {
    return getProgmemKey(keys_[k.addr]);
  }


 private:
  const Key* const keys_;
  const byte key_count_;


  // Attempt at iterator functions for range-based for loops. For sparse layers, this
  // would be different -- no iterating through KeyAddrs, instead it would be using an
  // array index to look through the entries.

 private:
  class Iterator;
  friend class Layer::Iterator;

 public:
  Iterator begin() const {
    return {*this, 0};
  }
  Iterator end() const {
    return {*this, key_count_};
  }

 private:
  // This is the "smart" version of this iterator, that doesn't return any KeymapEntry
  // with a transparent key. Might not be worth the code bloat, but simplifies the client
  // code.
  class Iterator {
   public:
    Iterator(const Layer& layer, byte pos)
      : layer_(layer), pos_(pos) {}

    bool operator!=(const Iterator& other) {
      while (pos_ != other.pos_) {
        key_ = layer_[KeyAddr(pos_)]; 
        if (! key_.isClear()) {
          return true;
        }
        ++pos_;
      }
      return false;
    }

    KeymapEntry operator*() const {
      return {KeyAddr(pos_), key_};
    }

    void operator++() {
      ++pos_;
    }

   private:
    const Layer& layer_;
    byte pos_;
    Key key_;
  };

};

} // namespace kaleidoscope {


// LayerIterator is used in a range-based for loop to return a KeymapEntry object for
// every non-transparent Key in a given Layer.  Here's how it should be used:
#if 0
Layer layer {...};
for (KeymapEntry entry : layer) {
  Key key = entry.key;
  KeyAddr addr = entry.addr;
  ...;
}
#endif


#define ELEMENTS(ARRAY) (sizeof(ARRAY)/sizeof(ARRAY[0]))

// This defines a macro that ensures the right number of keys are defined for a full layer
// (for an SRAM layer, obviously)
#define SRAM_LAYER(LAYER_NAME, ...)                                     \
  constexpr Key LAYER_NAME ## _keys[] = { __VA_ARGS__ };                \
  static_assert(ELEMENTS(LAYER_NAME ## _keys) == total_keys,            \
                "Error: wrong number of keys defined in layer '"        \
                #LAYER_NAME "'; must be exactly " TOTAL_KEYS_STR);
