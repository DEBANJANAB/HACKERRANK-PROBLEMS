#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    p=0.0
    n=0.0
    z=0.0
    l=len(arr)
    for i in range(l):
        if arr[i]<0:
            n+=1
        elif arr[i]>0:
            p+=1
        else:
            z+=1
    p=p/l
    n=n/l
    z=z/l
    print("{0:.6f}".format(p),"\n{0:.6f}".format(n),"\n{0:.6f}".format(z))

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
