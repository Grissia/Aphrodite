#ifndef TOLLS_H
#define TOOLS_H

#include <HIDKeyboard.h>

void WindowsKey(HIDKeyboard keyboard);
void EnterKey(HIDKeyboard keyboard);
void sendline(HIDKeyboard keyboard, const char *msg);
void send(HIDKeyboard keyboard, const char *msg);
void powershell(HIDKeyboard keyboard);
void cmd(HIDKeyboard keyboard);

#endif