#Written By Jason Malouin
#Squares All Numbers From 0 To 19 And Prints Them To The Terminal
import math

def sq(num):
    return pow(num, 2)

for x in range(20):
    print(sq(x))

