#include<stdio.h>

int main(){
    int arr[]={3,4,5,3,4,56,4,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}