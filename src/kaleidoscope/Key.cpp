#include "kaleidoscope/Key.h"

#include <Arduino.h>

#include "kaleidoscope/cKey.h"


namespace kaleidoscope {

// This function should probably be removed; it's always more efficient to test just the
// type we're interested in using the specific `Key` variant.
KeyType Key::type() const {
  if (Key::Keyboard::testType(*this))
    return KeyType::keyboard;

  if (Key::Plugin::testType(*this))
    return KeyType::plugin;

  if (Key::Layer::testType(*this))
    return KeyType::layer;

  if (Key::Mouse::testType(*this))
    return KeyType::mouse;

  if (Key::Consumer::testType(*this))
    return KeyType::consumer;

  if (Key::System::testType(*this))
    return KeyType::system;

  if (raw_ == clear)
    return KeyType::clear;

  return KeyType::unknown;
}

} // namespace kaleidoscope {
