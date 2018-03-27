#include "kaleidoscope/Key.h"

#include <Arduino.h>

#include "kaleidoscope/cKey.h"


namespace kaleidoscope {

// Return the correct type (KeyFlavor) of the Key object. I expect KeyFlavor::plugin to be
// more common than most of the core types, so I moved it up higher. These should be
// sorted in descending order of frequency of use; I'm just guessing here.
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
