#include <stdio.h>

int Fitsquare(int base){
    base=base-2;
    base=base/2;
    return base*(base+1)/2;
}
int main(void) {
    int t,i;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++){
        printf("%d\n",Fitsquare(n[i]));
    }
	// your code goes here
	return 0;
}

