#Written By Jason Malouin
#Cubes All Odd Numbers From 0-19 And Prints Them To The Terminal
#Prints All Even Numbers Without Cubing
import math

def cb(num):
    return pow(num, 3)

for x in range(20):
    if x % 2 == 0:
        print(x)
    else:
        print(cb(x))
