#include <wiringPi.h>
  int main (void)
  {
    wiringPiSetup();
    pinMode(3, INPUT);
    for (;;)
    {
      if (digitalRead(3) == HIGH)
      {
      	printf("Something is on!\n");
      }
      delay(1000);
    }
    return 0;
}
