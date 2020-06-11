#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superDigit function below.
def digit_sum(n):
    sum=0
    while(n!=0):
        sum+=n%10
        n=n//10
    return sum
def superDigit(n, k):
    temp=n;
    for i in range(k-1):
        n=n+temp
    n=int(n)
    while(n>9):
        n=digit_sum(n)
    return n
    
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = nk[0]

    k = int(nk[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()
