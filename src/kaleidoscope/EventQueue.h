// -*- mode: c++ -*-
/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2019  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <Arduino.h>

#include "kaleidoscope/Kaleidoscope.h"
#include "kaleidoscope/KeyAddr.h"

namespace kaleidoscope {

// This class defines a generic event queue that stores both key press and
// release events, recording the key address, a timestamp, and the keyswitch
// state (press or release).
template <uint8_t _capacity,
          typename _Bitfield  = uint8_t,
          typename _Timestamp = uint16_t>
class EventQueue {

  static_assert(_capacity <= (sizeof(_Bitfield) * 8),
                "EventQueue error: _Bitfield type too small for _capacity!");

 private:
  uint8_t    head_{0};
  uint8_t    tail_{0};
  KeyAddr    addrs_[_capacity];
  _Timestamp timestamps_[_capacity];
  _Bitfield  release_event_bits_;

 public:
  uint8_t head() const { return head_; }
  uint8_t tail() const { return tail_; }

  bool isEmpty() const { return ((tail_ - 1) % _capacity == head_); }
  bool isFull() const { return (tail_ == head_); }

  KeyAddr addr(uint8_t index) const { return addrs_[index]; }

  _Timestamp timestamp(uint8_t index) const { return timestamps_[index]; }

  bool isRelease(uint8_t index) const {
    return bitRead(release_event_bits_, index);
  }
  bool isPress(uint8_t index) const { return !isRelease(index); }

  // Append a new event on the end of the queue.
  void append(KeyAddr k, uint8_t keyswitch_state) {
    addrs_[tail_]      = k;
    timestamps_[tail_] = Kaleidoscope.millisAtCycleStart();
    bitWrite(release_event_bits_, tail_, keyToggledOff(keyswitch_state));
    ++tail_;
  }

  // Remove the first event from the head of the queue, shifting the others.
  void shift() {
    ++head_;
  }

  // Empty the queue entirely.
  void clear() {
    head_ = 0;
    tail_ = 0;
    release_event_bits_ = 0;
  }
};

}  // namespace kaleidoscope
