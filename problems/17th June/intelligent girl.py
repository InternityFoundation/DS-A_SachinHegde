st=input()
n=len(st)
arr=[0]*n
if(int(st[n-1])%2==0):
    arr[n-1]=1
else:
    arr[n]=0
for i in range(n-2,-1,-1):
    if(int(st[i])%2==0):
        arr[i]=arr[i+1]+1
    else:
        arr[i]=arr[i+1]
for i in range(n):
    print(arr[i],end=" ")

