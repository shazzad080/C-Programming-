#include<stdio.h>

int main(){
    int arr[]={5,6,7,2,4,5,6,7,9};
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}