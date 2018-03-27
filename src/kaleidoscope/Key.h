// -*- c++ -*-

#pragma once

#include <Arduino.h>
#include <EEPROM.h>

#include KALEIDOSCOPE_HARDWARE_H
#include KALEIDOSCOPE_KEYADDR_H


namespace kaleidoscope {

enum class KeyType : byte {
  keyboard,
  consumer,
  system,
  mouse,
  layer,
  plugin,
  clear,
  unknown
};


class Key {

 private:
  // Constants for special commonly-used values
  static constexpr uint16_t clear { 0xFFFF };
  static constexpr uint16_t blank { 0x0000 };

  uint16_t raw_ { clear };


 public:

  // These *_type_id constants are used to identify the type of the Key object. Can they
  // be defined here, or do they have to go in the *.cpp file?
  static constexpr byte keyboard_type_id { 0b000      };
  static constexpr byte consumer_type_id { 0b001000   };
  static constexpr byte   system_type_id { 0b00100100 };
  static constexpr byte    mouse_type_id { 0b00100101 };
  static constexpr byte    layer_type_id { 0b001010   };
  static constexpr byte   plugin_type_id { 0b01       };

  constexpr explicit
  Key(uint16_t raw) : raw_(raw) {}

  Key() = default;

  Key(const Key&) = default;

  // Conversion from Key to uint16_t
  constexpr explicit
  operator uint16_t() const { return raw_; }

  void readFromProgmem(const Key& progmem_key) {
    raw_ = pgm_read_word(&progmem_key);
  }
  void readFromEeprom(uint16_t eeprom_addr) {
    EEPROM.get(eeprom_addr, raw_);
  }

  void readKeycodeFromProgmem(const byte& progmem_key) {
    raw_ = uint16_t(pgm_read_byte(&progmem_key));
  }
  void readKeycodeFromEeprom(uint16_t eeprom_addr) {
    byte keycode;
    EEPROM.get(eeprom_addr, keycode);
    raw_ = keycode;
  }

  constexpr bool isClear() const {
    return (raw_ == clear);
  }
  constexpr bool isBlank() const {
    return (raw_ == blank);
  }
  constexpr bool isEmpty() const {
    return (this->isClear() || this->isBlank());
  }

  void mask() {
    raw_ = blank;
  }
  void unmask() {
    raw_ = clear;
  }
  bool isMasked() const {
    return this->isBlank();
  }

  KeyType type() const;


  // Comparison operators (Key objects)
  constexpr bool operator==(Key other) const {
    return this->raw_ == other.raw_;
  }
  constexpr bool operator!=(Key other) const {
    return this->raw_ != other.raw_;
  }
  constexpr bool operator>(Key other) const {
    return this->raw_ > other.raw_;
  }
  constexpr bool operator<(Key other) const {
    return this->raw_ < other.raw_;
  }
  constexpr bool operator>=(Key other) const {
    return this->raw_ >= other.raw_;
  }
  constexpr bool operator<=(Key other) const {
    return this->raw_ <= other.raw_;
  }

  // Set key value from integer
  Key& operator=(uint16_t val) {
    this->raw_ = val;
    return *this;
  }
  // These two operators should be useful for decoding offsets
  Key& operator+=(uint16_t val) {
    this->raw_ += val;
    return *this;
  }
  Key& operator-=(uint16_t val) {
    this->raw_ -= val;
    return *this;
  }
  // Key object versions
  Key& operator+=(Key other) {
    this->raw_ += other.raw_;
    return *this;
  }
  Key& operator-=(Key other) {
    this->raw_ -= other.raw_;
    return *this;
  }

  Key operator+(Key other) {
    return Key(this->raw_ + other.raw_);
  }
  Key operator-(Key other) {
    return Key(this->raw_ - other.raw_);
  }


 public:
  class Keyboard;
  class Consumer;
  class System;
  class Layer;
  class Mouse;
  class Plugin;

};

constexpr Key operator+(uint16_t x, Key key) {
  return Key(x + uint16_t(key));
}
constexpr Key operator+(Key key, uint16_t x) {
  return Key(uint16_t(key) + x);
}
constexpr Key operator-(uint16_t x, Key key) {
  return Key(x - uint16_t(key));
}
constexpr Key operator-(Key key, uint16_t x) {
  return Key(uint16_t(key) - x);
}

inline Key getProgmemKey(const Key& progmem_key) {
  Key new_key;
  new_key.readFromProgmem(progmem_key);
  return new_key;
}
inline Key getEepromKey(uint16_t eeprom_addr) {
  Key new_key;
  new_key.readFromEeprom(eeprom_addr);
  return new_key;
}

inline Key getShallowProgmemKey(const byte& progmem_keycode) {
  Key new_key;
  new_key.readKeycodeFromProgmem(progmem_keycode);
  return new_key;
}
inline Key getShallowEepromKey(uint16_t eeprom_addr) {
  Key new_key;
  new_key.readKeycodeFromEeprom(eeprom_addr);
  return new_key;
}

} // namespace kaleidoscope {

#include "kaleidoscope/Key/Keyboard.h"
#include "kaleidoscope/Key/Consumer.h"
#include "kaleidoscope/Key/System.h"
#include "kaleidoscope/Key/Layer.h"
#include "kaleidoscope/Key/Plugin.h"
#include "kaleidoscope/Key/Mouse.h"
