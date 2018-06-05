#include <stdio.h>
  #include <wiringPi.h>

  int main(void)
  {
    // Setup WiringPi
    if (wiringPiSetup() == -1)
      return 1;

    // Set output pins
    pinMode(0, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);

    // Initialize pattern for blinking
    int led0[] = {0, 0, 0, 0, 1, 1, 1, 1};
    int led1[] = {0, 0, 1, 1, 0, 0, 1, 1};
    int led2[] = {0, 1, 0, 1, 0, 1, 0, 1};

    // Create timer
    for(;;)
    {
      for (int i=0; i<=7; i++)
      {
        printf("%d in decimal is %d%d%d in binary\n", i, led0[i], led1[i], led2[i]);
        digitalWrite(0, led0[i]);
        digitalWrite(2, led1[i]);
        digitalWrite(3, led2[i]);
        delay(1000);
      }
    }
    return 0;
  }
