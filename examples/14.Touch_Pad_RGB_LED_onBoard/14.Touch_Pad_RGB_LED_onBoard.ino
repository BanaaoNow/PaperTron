#include <PaperTron.h>
PaperTron papertron;

int touchPad = 2;
int ValueR = 255;  
int ValueG = 0;
int ValueB = 0;  

void setup() {
  papertron.Begin();
  papertron.touchBegin();
  papertron.pinModeOnBoardRGB();  
}

void loop() {
  if(papertron.isHigh(touchPad)){
      papertron.onBoardRGB(ValueR,ValueG,ValueB);
    }
}
