# cook your dish here
def tom_jerry(tom):
    jerry=[]
    res=0
    j=1
    while(j<=tom):
        temp=tom
        if(j%2==0 and temp%2==0):
            jtemp=j
            jtemp=jtemp//2
            temp=temp//2
            while(jtemp>0):
                if(temp%2!=0 and jtemp%2==0):
                    jerry.append(jtemp)
                    break
                elif(temp%2==0 and jtemp%2==0):
                    jtemp=jtemp//2
                    temp=temp//2  
                else:
                    break
                
        elif(temp%2!=0 and j%2==0):
            jerry.append(j)
        
        j+=1
        
    res=(len(jerry))    
    return res  

ts=[]
res=[]
t=int(input())
for i in range(t):
    ts.append(int(input()))
    res.append(tom_jerry(ts[i]))
    
for i in range(len(res)):
    print(res[i])
