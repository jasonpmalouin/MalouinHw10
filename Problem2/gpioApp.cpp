/*Created By Jason Malouin
 * Usage: ./gpioAPP
 * Functionality: turns on LEDs 1 and 3, blinks LED 2 three times, reads the push-button value, and turns on the external LED for 3 seconds if the button is pressed at the time of execution
 * */


#include<iostream>
#include<unistd.h>
#include "GPIO.h"
#include "AnalogIn.h"
#include "makeLEDs.h"

using namespace std;

int main(int argc, char* argv[])
{
LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
AnalogIn analog(0);
GPIO pushButton(46);
GPIO externalLED(60);

cout << "Turning On LEDs 1 and 3" << endl;
leds[1].turnOn();
leds[3].turnOn();
for(int i=0;i<3;i++)
{
	leds[2].flash("500");
}
cout << "Flashing LED 2 three times" << endl;
cout << "The Value Of ADC0 Is: " << analog.readAdcSample() << endl;
pushButton.setDirection(INPUT);
pushButton.setActiveLow(true);
cout << "The PushButton Value Is: " << pushButton.getValue() << endl;
if(pushButton.getValue() == HIGH)
{
	externalLED.setValue(HIGH);
	sleep(3);
	externalLED.setValue(LOW);
}

}
