
#include <stdio.h>
#include <stdlib.h>

int binary_search(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    int mid,ans=0;
    
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        if(arr[mid]==key){
            ans=mid;
            break;
        }
    }
    return ans;
}
int main(int argc, char** argv) {
    int n,i,key;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    int pos=binary_search(n,arr,key);
    printf("%d",pos);
    return (EXIT_SUCCESS);
}

