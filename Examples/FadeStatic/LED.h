/*
  LED.h - Library for LEDs.
  Created by Benjamin Wüst, Januar 21, 2012.
  Released into the public domain.
*/

#ifndef LED_h
#define LED_h


  #if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
  #else
  #include "WProgram.h"
  #endif

#define MAX_COLORS 20


class LED
{
  public:
    LED(int LEDArray[]);
    void Fade(int LEDArray[],byte start_color[], byte end_color[], int fade_delay);
    bool FadeStatic(int LEDArray[],byte start_color[], byte end_color[]);
    void AddColor(byte color[]);
    void UpdateFadeStaticCircular(int LEDArray[]);
    void set_Color (int LEDArray[], byte* rgb);
  private:
    byte colorCircular[MAX_COLORS][3];
    int n;
    int pos;
    int calculate_linear_fade_position_to_exponential(int position, double pwm_max_steps, double gamma_correction);    
};

#endif