#include <stdio.h>
#include <stdlib.h>
int perm_coefficient(int n, int k) 
{ 
	int P[n + 1][k + 1]; 
        for(int i=0;i<=n;i++) 
	{       int cond=i;
        if(i>k){
            cond=k;
        }
		for(int j=0;j<=cond;j++) 
		{ 
                   if (j == 0) {
			P[i][j] = 1; 
                   }
                   else{
                    P[i][j]=P[i-1][j]+(j*P[i-1][j-1]); 
                   }
			P[i][j+1]=0; 
		} 
	} 
	return P[n][k]; 
} 

int main() 
{ 
	int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
	printf("%d",perm_coefficient(n, k)); 
	return 0; 
} 