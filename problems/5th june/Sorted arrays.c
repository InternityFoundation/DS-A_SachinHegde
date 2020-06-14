#include<stdio.h>
int main()
{
    long long int n,move1=0,i,j,k,d,move2=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        if(a[j+1]<=a[j])
        {
            d=a[j]-a[j+1]+1;
            a[j+1]=a[j+1]+d;
            move1=move1+d;
        }
    }
   printf("%lld",move1);
    return 0;
}