/*
 * Written By Jason Malouin
 * Usage Is: ./readResistance
 * Functionality: Reads The Value Of Ain0, Provides The Raw Value, And Computes The Resistor Value
 * For The Lower Resistor Of A Voltage Divider, Where The Upper Resistsor Is 10 Kohms.
 * */

#include<iostream>
#include<cmath>
#include "AnalogIn.h"

using namespace std;

int main(int argc, char* argv[])
{
AnalogIn analog(0);
int value = analog.readAdcSample();

//Wrote equation on paper for ADC value based on voltage divider
//Then rearranged to solve for unknown resistor value instead of the ADC value, which is known
float resistance = round(-(((10000*4096)/((float)value-4096))+10000));

cout << "Using AIN0" << endl;
cout << "ADC Value Is: " << value << endl;

if(resistance < 100)
{
cout << "Resistance Is Too Low. Please Connect A Resistor That's At Least 100 Ohms" << endl;
}else if(resistance < 1000 && resistance >= 100)
{
cout << "Resistance Is: " << resistance << " Ohms" << endl;
}else if(resistance >= 1000 && resistance < 100000)
{
resistance = resistance/1000;
cout << "Resistance Is: " << resistance << " Kohms" << endl;
}else if(resistance >= 100000)
{
cout << "Resistance Is Too High Or Pin Is Floating. Please Connect A Resistor Less Than 100 KOhms" << endl;
}

}
