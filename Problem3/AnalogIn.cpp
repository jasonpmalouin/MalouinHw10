#include<iostream>
#include<sstream>
#include<fstream>
#include "AnalogIn.h"
using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"

AnalogIn::AnalogIn()
{
}

AnalogIn::AnalogIn(unsigned int n)
{

	number = n;

}

void AnalogIn::setNumber(unsigned int n)
{

	number = n;

}

int AnalogIn::readAdcSample()
{

	stringstream ss;
	ss << ADC_PATH << number << "_raw";
	fstream fs;
	fs.open(ss.str().c_str(), fstream::in);
	int value;
	fs >> value;
	fs.close();
	return value;

}

AnalogIn::~AnalogIn()
{


}
