#include "LED.h"

int LEDArray[] = {11,8,9}; // Red, Green, Blue
LED LED1(LEDArray);

byte start_color3[] = {255, 0, 0};
byte end_color3[] = {0, 255, 255};

void setup() {
  LED1.AddColor(start_color3);
  LED1.AddColor(end_color3);
  LED1.AddColor(start_color3);
}
bool retorno = true;
void loop() {
  
  LED1.UpdateFadeStaticCircular(LEDArray);

  
  // Fade from start to end
  /*if(retorno == true){
    retorno = LED1.FadeStatic(LEDArray, start_color3 , end_color3); 
  }*/

    
  delay(10);
  // Fade from end to start
  //LED1.Fade(LEDArray, end_color3 , start_color3, 5);
}
