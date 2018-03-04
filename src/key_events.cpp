#if 0
#include "Kaleidoscope.h"

namespace kaleidoscope {

static bool handleSyntheticKeyswitchEvent(Key mappedKey, uint8_t keyState) {
  if (mappedKey.flags & RESERVED)
    return false;

  if (!(mappedKey.flags & SYNTHETIC))
    return false;

  if (mappedKey.flags & IS_CONSUMER) {
    if (keyIsPressed(keyState))
      kaleidoscope::hid::pressConsumerControl(mappedKey);
  } else if (mappedKey.flags & IS_SYSCTL) {
    if (keyIsPressed(keyState)) {
    } else if (keyWasPressed(keyState)) {
      kaleidoscope::hid::pressSystemControl(mappedKey);
      kaleidoscope::hid::releaseSystemControl(mappedKey);
    }
  } else if (mappedKey.flags & IS_INTERNAL) {
    return false;
  } else if (mappedKey.flags & SWITCH_TO_KEYMAP) {
    // Should not happen, handled elsewhere.
  }

  return true;
}

static bool handleKeyswitchEventDefault(Key mappedKey, KeyAddr k, uint8_t keyState) {
  //for every newly pressed button, figure out what logical key it is and send a key down event
  // for every newly released button, figure out what logical key it is and send a key up event

  if (mappedKey.flags & SYNTHETIC) {
    handleSyntheticKeyswitchEvent(mappedKey, keyState);
  } else if (keyIsPressed(keyState)) {
    kaleidoscope::hid::pressKey(mappedKey);
  } else if (keyToggledOff(keyState) && (keyState & INJECTED)) {
    kaleidoscope::hid::releaseKey(mappedKey);
  }
  return true;
}

void handleKeyswitchEvent(Key mappedKey, KeyAddr k, uint8_t keyState) {
  /* These first steps are only done for keypresses that have a real (row,col).
   * In particular, doing them for keypresses with out-of-bounds (row,col)
   *   would cause out-of-bounds array accesses in Layer.lookup(),
   *   Layer.updateLiveCompositeKeymap(), etc.
   * Note that many INJECTED keypresses use the UNKNOWN_KEYSWITCH_LOCATION macro
   *   which gives us row==255, col==255 here.  Therefore, it's legitimate that
   *   we may have keypresses with out-of-bounds (row, col).
   * However, some INJECTED keypresses do have valid (row, col) if they are
   *   injecting an event tied to a physical keyswitch - and we want them to go
   *   through this lookup.
   * So we can't just test for INJECTED here, we need to test the row and col
   *   directly.
   * Note also that this (row, col) test avoids out-of-bounds accesses in *core*,
   *   but doesn't guarantee anything about event handlers - event handlers may
   *   still receive out-of-bounds (row, col), and handling that properly is on
   *   them.
   */
  if (k.addr < TOTAL_KEYS) {

    /* If a key had an on event, we update the live composite keymap. See
     * layers.h for an explanation about the different caches we have. */
    if (keyToggledOn(keyState))
      Layer.updateLiveCompositeKeymap(k);

    /* If the key we are dealing with is masked, ignore it until it is released.
     * When releasing it, clear the mask, so future key events can be handled
     * appropriately.
     *
     * See layers.cpp for an example that masks keys, and the reason why it does
     * so.
     */
    if (KeyboardHardware.isKeyMasked(k)) {
      if (keyToggledOff(keyState)) {
        KeyboardHardware.unMaskKey(k);
      } else {
        return;
      }
    }

    /* Convert (row, col) to the correct mappedKey
     * The condition here means that if mappedKey and (row, col) are both valid,
     *   the mappedKey wins - we don't re-look-up the mappedKey
     */
    if (mappedKey.raw == Key_NoKey.raw) {
      mappedKey = Layer.lookup(k);
    }

  }  // if (k.add < TOTAL_KEYS) {

  // Keypresses with out-of-bounds (row,col) start here in the processing chain

  for (byte i = 0; Kaleidoscope.eventHandlers[i] != NULL && i < HOOK_MAX; i++) {
    Kaleidoscope_::eventHandlerHook handler = Kaleidoscope.eventHandlers[i];
    mappedKey = (*handler)(mappedKey, k, keyState);
    if (mappedKey.raw == Key_NoKey.raw)
      return;
  }
  mappedKey = Layer.eventHandler(mappedKey, k, keyState);
  if (mappedKey.raw == Key_NoKey.raw)
    return;
  handleKeyswitchEventDefault(mappedKey, k, keyState);
}

} // namespace kaleidoscope {
#endif
