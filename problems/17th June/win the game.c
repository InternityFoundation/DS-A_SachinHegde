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
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int probability = 0, c = 0;

void findresult(int r,int g,int n){
	if(g==-1||r==-1)return ;
	if(r==0){
		probability++;
		if(n%2==0)c++;
		return ;
	}
	if(n==-1)  n=0;
	else n++;
	findresult(r,g-1,n%2);
	findresult(r-1,g,n%2); 
	return ;
}

int main(){
     
 
    int q;
    scanf("%d",&q);
    while(q--){
    	int x, y;
    	scanf("%d %d",&x,&y);
    	findresult(x, y, -1);
		if(probability>1){
    	printf("%f\n",(1-1/(probability*1.0)));}
		else{
			probability=1;
			printf("%f\n",probability*1.0);
		}
    	probability = 0, c = 0;
    }
    return 0;
}