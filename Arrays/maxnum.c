#include<stdio.h>

int main(){
    int arr[]={-5,-9,-7,-2,-4,-5,-6,-7,-9};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){
      if(mx<arr[i])mx=arr[i];
    }
    printf("%d",mx);
    return 0;
}