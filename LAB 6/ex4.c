#include<stdio.h>
int main(){
    int n,rotate;
    printf("Enter the size of a Array :");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is :[");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("]\n");
    printf("Enter Rotate :");
    scanf("%d",&rotate);
    printf("New Array is :[");
    for(int i=rotate;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<rotate;i++){
     printf("%d ",arr[i]);
}
printf("]");
     return 0;
}