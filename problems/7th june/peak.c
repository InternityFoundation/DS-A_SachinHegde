/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: sachi
 *
 * Created on 14 June, 2020, 12:04 PM
 */

// C program to find a peak 
// element using divide and conquer 
#include <stdio.h> 

// A binary search based function that 
// returns index of a peak element 
int Peakindex(int arr[], int low, int high, int n) 
{       
    int mid=low+(high-low)/2; 
    if ((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])) 
        return mid; 
    else if (mid>0 && arr[mid-1]>arr[mid]) 
	return Peakindex(arr,low,(mid-1),n); 
    else
	return Peakindex(arr,(mid+1),high,n); 
} 
int Peak(int arr[], int n) 
{ 
	return Peakindex(arr,0,n-1,n); 
} 
int main() 
{ 
    int n,i,ans;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ans=Peak(arr, n);
    printf("%d",arr[ans]); 
    return 0; 
} 

