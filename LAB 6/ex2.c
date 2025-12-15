#include<stdio.h>

int main(){
    int n,index,value;
    printf("Enter the size of a Array :");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is :[");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    printf("Even :");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        printf("%d ",arr[i]);
    }
    }
    printf("\nOdd :");
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
        printf("%d ",arr[i]);
    }
    }
    return 0;
}


