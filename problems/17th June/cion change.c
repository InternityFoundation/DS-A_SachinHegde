#include <stdio.h>
#include <stdlib.h>

int coinchange(int S[],int m,int n) 
{ 
	int i, j, x, y; 
	int table[n+1][m];  
	for(i=0;i<m;i++) 
		table[0][i] = 1;
	for(i=1;i<n+1;i++) 
	{ 
		for(j=0;j<m;j++) 
		{ 
			x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
			y = (j >= 1)? table[i][j-1]: 0;
			table[i][j] = x + y; 
		} 
	} 
	return table[n][m-1]; 
} 
int main() 
{ 
    int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
	int n;
        scanf("%d",&n);
	printf("%d", coinchange(arr, m, n)); 
	return 0; 
} 

