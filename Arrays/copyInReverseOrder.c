#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of a Array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Array is :[");
    for(int i=0;i<n;i++){
        printf(" %d, ",arr[i]);
    }
    printf("]\n");
    int brr[n];
    printf("Reverse Array is :[");
for(int i=0;i<n;i++){
    brr[i]=arr[n-1-i];
     printf(" %d, ",brr[i]);
}
printf("]");
    return 0;
}