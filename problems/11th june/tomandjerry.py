# cook your dish here
def tom_jerry(tom,j):
    jerry=0
    res=0
    '''while(j<=tom):
        temp=tom
        if(j%2==0 and temp%2==0):
            jtemp=j
            jtemp=jtemp//2
            temp=temp//2
            while(jtemp>0):
                if(temp%2!=0 and jtemp%2==0):
                    jerry+=1
                    break
                elif(temp%2==0 and jtemp%2==0):
                    jtemp=jtemp//2
                    temp=temp//2  
                else:
                    break
                
        elif(temp%2!=0 and j%2==0):
            jerry+=1
        
        j+=2'''
    if(j>0):
        if(tom%2!=0 and j%2==0):
            jerry+=1
            res=tom_jerry(tom,j-1)
            jerry+=res
        elif(tom%2==0 and j%2==0):
            jtemp=j
            temp=tom
            jtemp=jtemp//2
            temp=temp//2
            while(jtemp>0):
                if(temp%2!=0 and jtemp%2==0):
                    jerry+=1
                    break
                elif(temp%2==0 and jtemp%2==0):
                    jtemp=jtemp//2
                    temp=temp//2  
                else:
                    break
            res=tom_jerry(tom,j-1)
            jerry+=res
            
        elif(tom%2!=0 and j%2!=0):
            res=tom_jerry(tom,j-1)
            jerry+=res
        else:
            res=tom_jerry(tom,j-1)
            jerry+=res
    return jerry  

ts=[]
res=[]
t=int(input())
for i in range(t):
    ts.append(int(input()))
    res.append(tom_jerry(ts[i],ts[i]))
    
for i in range(len(res)):
    print(res[i])
