#include <stdio.h>

int findmax(int n)
{
	
	return ((n*(n+3))/2);
}
int findmin(int n)
{
	int min,ans=0;
	if(n==0){
	    return 0;
	}
	if(n==1){
	    ans=2;
	    return ans;
	}
	if(n%2==0){
	    ans=(n+1+findmin(n/2)+findmin(n/2-1));
	    return ans;
	}
	if(n%2!=0){
	    ans=(n+1+2*findmin(n/2));
	    return ans;
	}
	
}
int main(void) 
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int min,max,n,m;
		scanf("%d %d",&n,&m);
		min=findmin(n);
		max=findmax(n);
	    if(m<=max&&m>=min){
		printf("0\n");
	    }
		else if(m>max){
		printf("%d\n",m-max);
		}
		else if(m<min){
		printf("-1\n");
		}
	}
	return 0;
} 

