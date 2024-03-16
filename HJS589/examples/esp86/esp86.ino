/*


 100% Untuk 100 Masjid.
  OE,A,B,SCLK --> d8,d0,d6,d3
  d7=R/Data d5=CLK
  
*/


#include <HJS589.h>
#include <SystemFont5x7.h>
#include"Arial_Black_16.h"
//#include "TimesNewRoman16B.h"
#include <pgmspace.h>

const byte mos[]ICACHE_RODATA_ATTR = { 32, 16, 0, 1, 0x00, 0x00, 0x20, 0x03, 0x80, 0x08, 0x20, 0x0f, 0xe0, 0x08, 0x20, 0x3e, 0xf8, 0x08, 0x70, 0x78, 0x3c, 0x1c, 0xf8, 0xf0, 0x1e, 0x3e, 0xd8, 0xf0, 0x1e, 0x36, 0xd8, 0xf8, 0x3e, 0x36, 0x70, 0x7f, 0xfc, 0x1c, 0x7f, 0xff, 0xff, 0xfc, 0x7f, 0xfe, 0xff, 0xfc, 0x7e, 0xfc, 0x7e, 0xfc, 0x74, 0x48, 0x24, 0x5c, 0x74, 0x48, 0x24, 0x5c, 0x74, 0x48, 0x24, 0x5c, 0x7c, 0x78, 0x3c, 0x7c};

HJS589 display(4, 1);

void ICACHE_RAM_ATTR wiah() {
  display.refresh();
  timer0_write(ESP.getCycleCount() + 40000);
}


void setup() {
  Serial.begin(9600); Serial.setTimeout(131);
  display.setBrightness(7);//0-1023
  display.setFont(SystemFont5x7);
  display.start();
  display.clear();
  timer0_attachInterrupt(wiah);
  timer0_write(ESP.getCycleCount() + 40000);
}




void geser(){
  display.setFont(Arial_Black_16);
  int x = display.width();
  char d[]="100% Untuk 1000 Masjid...";
  int s = -display.textWidth(d);
  while (x >= s) {
    display.drawText(--x, 0, d);
    delay(20);
  }
}


void loop() {
  
  geser();

  display.setFont(SystemFont5x7);
  display.drawText(35, 0, "Untuk 1001"); 
  display.drawText(35, 9, "Masjid");
  display.drawBitmap(1, 0, mos);
  delay(3500);
  display.clear();

}
