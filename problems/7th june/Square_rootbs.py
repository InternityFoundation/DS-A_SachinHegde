def squareRoot(number): 

	start = 0
	end,ans = number,1

	while (start <= end) : 
		mid = int((start + end) / 2) 
		
		if (mid * mid == number) : 
			ans = mid 
			break
		
		if (mid * mid < number) : 
			start = mid + 1
		else : 
			end = mid - 1 
	increment = 0.1
	for i in range(0, 5): 
		while (ans * ans <= number): 
			ans += increment 
		
		ans = ans - increment 
		increment = increment / 10
	
	return ans 
n=int(input())
print(squareRoot(n))
