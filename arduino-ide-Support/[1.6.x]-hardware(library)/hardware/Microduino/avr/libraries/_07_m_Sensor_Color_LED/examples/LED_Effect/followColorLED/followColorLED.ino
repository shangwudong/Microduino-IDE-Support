/***************************************
 本示例给出了实现流水灯效的方法
 ****************************************/

#include <Microduino_ColorLED.h> //引用彩灯库

#define PIN            6         //彩灯引脚
#define NUMPIXELS      7        //级联彩灯数量

#define val_max 255
#define val_min 0

ColorLED strip = ColorLED(NUMPIXELS, PIN); //将ColorLED类命名为strip，并定义彩灯数量和彩灯引脚号

void setup() {
  strip.begin();                 //彩灯初始化
  strip.show();
}

/*流水灯效果*/
void loop() {
  theaterChase(COLOR_RED,    2, 450); //红色流水灯效果，循环2次，两灯之间延时450ms
  theaterChase(COLOR_BLUE,   4, 400); //蓝色流水灯效果，循环4次，两灯之间延时400ms
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t n, uint8_t wait) {
  for (int j = 0; j < n; j++) { //do 10 cycles of chasing
    for (uint16_t i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, c);  //turn every third pixel on
      strip.show();
      delay(wait);
      strip.setPixelColor(i, 0); //turn every third pixel on
      strip.show();
    }
  }
}
