#!/bin/bash
config-pin p9.12 gpio
config-pin p8.16 gpio_pu
echo "Building gpioApp Application"
g++ -Wall GPIO.cpp makeLEDs.cpp AnalogIn.cpp gpioApp.cpp -o gpioApp
