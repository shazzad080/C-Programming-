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
    printf("Enter index :");
    scanf("%d",&index);
    printf("Enter value :");
    scanf("%d",&value);
   for(int i=n-2;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=value;
     printf("New Array is :[");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  printf("]\n");
    return 0;
}