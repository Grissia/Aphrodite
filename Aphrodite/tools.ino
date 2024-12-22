void WindowsKey(HIDKeyboard keyboard){
  keyboard.pressSpecialKey(GUI);
  keyboard.releaseKey();
}
void EnterKey(HIDKeyboard keyboard){
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
}
void sendline(HIDKeyboard keyboard, const char *msg){
  keyboard.println(msg);
  delay(800);
  EnterKey(keyboard);
}
void send(HIDKeyboard keyboard, const char *msg){
  keyboard.print(msg);
  (msg);
}
void powershell(HIDKeyboard keyboard) {
  WindowsKey(keyboard);
  delay(800);
  sendline(keyboard, "run");
  delay(800);
  sendline(keyboard, "powershell");
  delay(800);
}
void cmd(HIDKeyboard keyboard) {
  WindowsKey(keyboard);
  delay(800);
  sendline(keyboard, "run");
  delay(800);
  sendline(keyboard, "cmd");
  delay(800);
}