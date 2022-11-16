#!/bin/bash
echo "Building ADC Read Application"
g++ -Wall AnalogIn.cpp test_analog.cpp -o analogBuild
