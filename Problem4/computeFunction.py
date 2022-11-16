#Written By Jason Malouin
#Computes The Value Of f(x) = x^2 + 2 for x in 0 to 9 And Prints Results To The Terminal
import math

for x in range(10):
    fx = (pow(x , 2) + 2)
    print("f(x(" + str(x) + ")) = " + str(fx))
