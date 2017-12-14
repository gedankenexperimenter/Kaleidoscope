#include "Kaleidoscope.h"
#include <stdarg.h>

Kaleidoscope_::eventHandlerHook Kaleidoscope_::eventHandlers[HOOK_MAX];
Kaleidoscope_::loopHook Kaleidoscope_::loopHooks[HOOK_MAX];

Kaleidoscope_::Kaleidoscope_(void) {
}

void
Kaleidoscope_::setup(void) {
  KeyboardHardware.setup();
  Keyboard.begin();

  // A workaround, so that the compiler does not optimize handleKeyswitchEvent out...
  // This is a no-op, but tricks the compiler into not being too helpful
  // TODO(anyone): figure out how to hint the compiler in a more reasonable way
  handleKeyswitchEvent(Key_NoKey, 255, 0);

  // Update the keymap cache, so we start with a non-empty state.
  Layer.updateActiveLayers();
  for (KeyAddr key_addr = 0; key_addr < TOTAL_KEYS; key_addr++) {
    Layer.updateLiveCompositeKeymap(key_addr);
  }
}

void
Kaleidoscope_::loop(void) {
  KeyboardHardware.scanMatrix();

  hooks_->preReportHook();

  for (byte i = 0; loopHooks[i] != NULL && i < HOOK_MAX; i++) {
    loopHook hook = loopHooks[i];
    (*hook)(false);
  }

  kaleidoscope::hid::sendKeyboardReport();
  kaleidoscope::hid::releaseAllKeys();

  for (byte i = 0; loopHooks[i] != NULL && i < HOOK_MAX; i++) {
    loopHook hook = loopHooks[i];
    (*hook)(true);
  }

  hooks_->postReportHook();
}

bool
Kaleidoscope_::focusHook(const char *command) {
  enum {
    ON,
    OFF,
    GETSTATE,
  } subCommand;

  if (strncmp_P(command, PSTR("layer."), 6) != 0)
    return false;

  if (strcmp_P(command + 6, PSTR("on")) == 0)
    subCommand = ON;
  else if (strcmp_P(command + 6, PSTR("off")) == 0)
    subCommand = OFF;
  else if (strcmp_P(command + 6, PSTR("getState")) == 0)
    subCommand = GETSTATE;
  else
    return false;

  switch (subCommand) {
  case ON: {
    uint8_t layer = Serial.parseInt();
    Layer.on(layer);
    break;
  }

  case OFF: {
    uint8_t layer = Serial.parseInt();
    Layer.off(layer);
    break;
  }

  case GETSTATE:
    Serial.println(Layer.getLayerState(), BIN);
    break;
  }

  return true;
}

Kaleidoscope_ Kaleidoscope;
