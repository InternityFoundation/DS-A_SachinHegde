def uglynumber(n): 
	ugly=[0]*n 
	ugly[0]=1
	i2=i3=i5=0
	next2=2
	next3=3
	next5=5
	for l in range(1, n): 
		ugly[l]=min(next2,next3,next5) 
		if ugly[l] == next2: 
			i2+=1
			next2=ugly[i2]*2
		if ugly[l] == next3: 
			i3+=1
			next3=ugly[i3]*3
		if ugly[l] == next5: 
			i5+=1
			next5=ugly[i5]*5 
	return ugly[-1] 

def main(): 
	n=int(input())
	print(uglynumber(n))


if __name__ == '__main__': 
	main() 
