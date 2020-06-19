'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
def xsquare(n,a,b,num,l,r):
    res=0
    i=l
    while(i<=r):
        if(num==1):
            if(i==r):
                res+=a[i-1]
                i=i+1
            else:
                res+=a[i]+b[i+1]
                i+=2
        else:
            if(i==r):
                res+=b[i-1]
                i=i+1
            else:
                res+=b[i]+a[i+1]
                i+=2
    return res

n,q=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
res=[]
for i in range(q):
    num,l,r=map(int,input().split())
    res.append(xsquare(n,a,b,num,l,r))
for i in range(q):
    print(res[i])
