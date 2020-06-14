/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>

int find(int n,int sol,int q,int r){
	int i,j;
	for(i=1;i<=n;i++){
		if(i>=r){
			return i;
		}
	}
        return i-1;
}
int main(){
	int n,i,j,q;
	scanf("%d",&n);
	int sold[n];
	for(i=0;i<n;i++){
		scanf("%d ",&sold[i]);
	}
	scanf("%d",&q);
	int round[q],res[q];
	for(i=0;i<q;i++){
		scanf("%d",&round[i]);
		res[i]=find(n,sold,q,round[i]);
	}
	int sum[q];
	for(i=0;i<q;i++){
		sum[i]=0;
		for(j=1;j<=res[i];j++){
			sum[i]+=j;
		}
	}
	for(i=0;i<q;i++){
	printf("%d %d\n",res[i],sum[i]);
	}
}