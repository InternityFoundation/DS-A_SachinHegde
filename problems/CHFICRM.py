def change(n,price):
    count=0
    change=0
    coin5=0
    coin10=0
    coin15=0
    for i in range(n):
        change=price[i]-5
        if(price[0]==10 or price[0]==15):
            count+=1
            return "NO"
        if(price[i]==5):
            coin5+=1
        elif(price[i]==10):
            coin10+=1
        else:
            coin15+=1
        if(change==5):
            if(coin5>0):
                coin5-=1
            else:
                count+=1
                return "NO"
        elif(change==10):
            if(coin10>=1):
                coin10-=1
            elif(coin5>=2):
                coin5-=2
            else:
                count+=1
                return "NO"
    if(count==0):
        return "YES"


t=int(input())
N=[]
buyers=[]
res=[]
for i in range(t):
    N.append(int(input()))
    buyers=list(map(int, input().split()))
    res.append(change(N[i],buyers))
for i in range(t):
    print(res[i])
    

