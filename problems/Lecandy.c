#include <stdio.h>

int main(void) {
    int t,i,j;
    scanf("%d",&t);
    int N[t],C[t],sum[t];
    for(i=0;i<t;i++){
        sum[i]=0;
        scanf("%d %d",&N[i],&C[i]);
        int n=N[i];
        int arr[n];
        for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
        sum[i]+=arr[j];
        }
    }
    for(i=0;i<t;i++){
        if(sum[i]<=C[i]){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    
	// your code goes here
	return 0;
}

