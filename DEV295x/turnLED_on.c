#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
  printf ("Raspberry Pi Switch\n");

  if (wiringPiSetup () == -1)
  {
    return 1;
  }
  pinMode (2, OUTPUT); //BCm27
  printf("On\n");
  digitalWrite(2,1) //On

  return 0;
}
