#include "rick.h"
void RollWithTabs(HIDKeyboard keyboard) {
  powershell(keyboard);
  sendline(keyboard, "for ( $i = 1; $i -le 10; $i++ ){ start chrome.exe https://www.youtube.com/watch?v=dQw4w9WgXcQ } ; sleep(2)");
  delay(800);
}	
void RollWithPages(HIDKeyboard keyboard) {
  powershell(keyboard);
  sendline(keyboard, "for ( $i = 1; $i -le 10; $i++ ){ start chrome.exe \'--new-window https://www.youtube.com/watch?v=dQw4w9WgXcQ\' } ; sleep(2)");
  delay(800);
}	