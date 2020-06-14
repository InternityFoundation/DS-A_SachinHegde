import sys
def closepair(ar1, ar2, m, n, x): 
	diff=sys.maxsize 
	l = 0
	r = n-1
	while(l < m and r >= 0): 
		if abs(ar1[l] + ar2[r] - x) < diff: 
			res_l = l 
			res_r = r 
			diff = abs(ar1[l] + ar2[r] - x) 
		if ar1[l] + ar2[r] > x: 
			r=r-1
		else:
			l=l+1

	print(ar1[res_l],",",ar2[res_r]) 

ar1=list(map(int, input().split()))
ar2=list(map(int, input().split()))
m=len(ar1) 
n=len(ar2) 
x=int(input())
closepair(ar1,ar2,m,n,x)
