#include <stdio.h>

int check_loss(int n,int price[],int k){
    int sum=0,i;
    for(i=0;i<n;i++){
    if(price[i]>=k){
        sum+=(price[i]-k);
    }
    }
    return sum;
}

int main(void) {
	// your code goes here
	int t,i,k;
	scanf("%d",&t);
	int res[t],j=0;
	int N[t],K[i];
	for(i=0;i<t;i++){
	scanf("%d %d",&N[i],&K[i]);
	int price[N[i]];
	for(k=0;k<N[i];k++){
	scanf("%d",&price[k]);
	}
	res[i]=check_loss(N[i],price,K[i]);
	}

for(i=0;i<t;i++){
    printf("%d\n",res[i]);
}
	return 0;
}

