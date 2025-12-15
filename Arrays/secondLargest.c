#include<stdio.h>
int main(){
int n,max,smax;
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
    printf("\n");
 max =arr[0];
for(int i=0;i<n; i++) {
if(max<arr[i]) max = arr[i];
}
printf("1st largest is %d\n",max);
 smax=arr[0];
for(int i=0;i<n;i++){
if(arr[i]!=max && smax<arr[i])
 smax = arr[i];
}
 printf("2nd largest is %d",smax);
 return 0;
}