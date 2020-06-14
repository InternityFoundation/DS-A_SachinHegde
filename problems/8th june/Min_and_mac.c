/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: sachi
 *
 * Created on 14 June, 2020, 10:32 PM
 */

#include <stdio.h>
#include <stdlib.h>
int Maximum(int a[], int index, int l); 
int Minimum(int a[], int index, int l); 

int Maximum(int a[], int index, int l) 
{ 
	int max; 
	if (index >= l - 2) { 
		if (a[index] > a[index + 1]) 
			return a[index]; 
		else
			return a[index + 1]; 
	} 
	max = Maximum(a, index + 1, l); 
	if (a[index] > max) 
		return a[index]; 
	else
		return max; 
}  
int Minimum(int a[], int index, int l) 
{ 
	int min; 
	if (index >= l - 2) { 
		if (a[index] < a[index + 1]) 
			return a[index]; 
		else
			return a[index + 1]; 
	} 
	min = Minimum(a, index + 1, l); 
	if (a[index] < min) 
		return a[index]; 
	else
		return min; 
} 

int main() 
{  
	int min, max, N; 
        scanf("%d",&N);
        int a[N];
        for (int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
	max=Maximum(a,0,N); 
	min=Minimum(a,0,N); 
	printf("The minimum number is: %d\n", min); 
	printf("The maximum number is: %d", max); 
	return 0; 
}

