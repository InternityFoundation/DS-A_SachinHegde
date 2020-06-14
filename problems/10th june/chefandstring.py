# cook your dish here
def team(x):
    i=0
    count=0
    while(i<len(x)-1):
        if(x[i]!=x[i+1]):
            count+=1
            i=i+2
        else:
            i=i+1
    return count

t=int(input())
s=[]
for i in range(t):
    s.append(input())

for i in range(t):
    ans=team(s[i])
    print(ans)
    