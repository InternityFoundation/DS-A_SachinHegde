import math
import os
import random
import re
import sys

# Complete the longestCommonSubsequence function below.
def longestCommonSubsequence(a, b):
    m=len(a)
    n=len(b)
    l=[[None]*(n+1) for x in range(m+1)]
    for i in range(m+1):
        for j in range(n+1):
            if(i==0 or j==0):
                l[i][j]=0
            elif(a[i-1]==b[j-1]):
                l[i][j]=1+l[i-1][j-1]
            else:
                l[i][j]=max(l[i-1][j],l[i][j-1])
            index=l[m][n]
    print(index)
    temp=index
    lcs = [""] * (index+1)
    i=m;j=n
    while(i>0 and j>0):
        if a[i-1] == b[j-1]:
            lcs[index-1] = a[i-1]
            i-=1
            j-=1
            index-=1
        elif l[i-1][j] > l[i][j-1]:
            i-=1
        else:
            j-=1
    return lcs

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = longestCommonSubsequence(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
