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
int i=0;
int j=n-1;
while (i<j){
    //swap arr[i] and arr[j]
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
printf("Swaping Array is :[");
for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
printf("]\n");
     return 0;
}