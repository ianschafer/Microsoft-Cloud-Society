#include <wiringPi.h>
    int main(void)
    {
		wiringPiSetup();
		pinMode(0, OUTPUT);
        for (;;) //Equivalent to a While(True) statement
        {
			digitalWrite(0, HIGH);
			delay(500);
			digitalWrite(0, LOW);
			delay(500);
		}
		return 0;
	}
