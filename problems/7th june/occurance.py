def binarySearch(arr, l, r, x): 
	if (r < l): 
		return -1

	mid = int( l + (r - l) / 2) 

	if arr[mid] == x: 
		return mid 

	if arr[mid] > x: 
		return binarySearch(arr, l,mid - 1, x) 
	return binarySearch(arr, mid + 1,r, x) 

def countOccurrences(arr, n, x): 
	ind = binarySearch(arr, 0, n - 1, x) 
	if ind == -1: 
		return 0 
	count = 1
	left = ind - 1
	while (left >= 0 and
		arr[left] == x): 
		count += 1
		left -= 1 
	right = ind + 1; 
	while (right < n and
		arr[right] == x): 
		count += 1
		right += 1

	return count 

n=int(input())
arr=list(map(int, input().split()))
x=int(input())
print(countOccurrences(arr, n, x))
