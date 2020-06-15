#include <stdio.h>
int countsumvsXOR(int n) 
{ 
    int count=0; 
    while (n) 
    { 
        if ((n & 1) == 0) 
            count++;
        n=n>>1; 
    } 
    int ans=1<<count;
    return ans; 
} 

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",countsumvsXOR(n));

    return 0;
}