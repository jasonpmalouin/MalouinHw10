#!/bin/bash
echo "Building ADC Read Resistance Application"
g++ -Wall AnalogIn.cpp read_resistance.cpp -o readResistance
