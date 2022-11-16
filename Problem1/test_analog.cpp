/* Written By Jason Malouin
 * Usage: ./analogBuild (analog pin number)
 * Displays pin # being read from and the ADC value
 * */

#include<iostream>
#include "AnalogIn.h"
using namespace std;

int main(int argc, char* argv[])
{
AnalogIn analog(0);
cout << "The Analog Pin Number Being Read Is: " << analog.getNumber() << endl;
cout << "The Analog Value Is: " << analog.readAdcSample() << endl;

}
