#include "hack.h"
void FakeHackingPrank(HIDKeyboard keyboard) {
  cmd(keyboard);
  delay(800);
  sendline(keyboard, "color a");
  delay(800);
  sendline(keyboard, "title Hacked by G.L.");
  delay(800);
  sendline(keyboard, "cls");
  delay(800);
  sendline(keyboard, "notepad.exe");
  delay(800);
  sendline(keyboard, "SURPRISE!!!");
  delay(800);
  sendline(keyboard, "=================================================");
  delay(800);
  EnterKey(keyboard);
  delay(800);
  sendline(keyboard, ">>  This computer is now hijacked by G.L.");
  delay(800);
  sendline(keyboard, ">>  Code protection removed");
  delay(800);
  sendline(keyboard, ">>  All passwords exported");
  delay(800);
  sendline(keyboard, ">>  All document files deleted");
  delay(800);
  EnterKey(keyboard);
  sendline(keyboard, "Good luck");
  delay(800);
  EnterKey(keyboard);
  delay(800);
  sendline(keyboard, "=================================================");
  delay(800);

}