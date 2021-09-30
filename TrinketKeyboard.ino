

#include <TrinketKeyboard.h>
#include <avr/power.h>

void setup()
{
  // overclock cpu to 16mhz
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  // start USB stuff
  TrinketKeyboard.begin();
}
void loop()
{
  TrinketKeyboard.poll();

  /*
   TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
   delay(1000);
   TrinketKeyboard.pressKey(0,0);
   delay(1000);
   */
   TrinketKeyboard.pressKey(0x08, 0x15);  /* GUI+r Key */
  delay(40);
  TrinketKeyboard.pressKey(0, 0); /* Key Release */
  delay(100);
  TrinketKeyboard.pressKey(0x08, 0x15);  /* GUI+r Key again just to be sure we start off on the right foot*/
  delay(40);
  TrinketKeyboard.pressKey(0, 0); /* Key Release */
  delay(200);
   
   TrinketKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
   delay(1000);
   
  TrinketKeyboard.pressKey(0, 0x28);
  delay(5);
  TrinketKeyboard.pressKey(0,0);
   
   delay(5000);

}
