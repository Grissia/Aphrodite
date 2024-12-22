#include "tools.h"
#include "rick.h"
#include "hack.h"
void setup() {
  HIDKeyboard keyboard;
  keyboard.begin();
  delay(10000);
  FakeHackingPrank(keyboard);
  delay(800);
  RollWithTabs(keyboard);
}

void loop() {
}