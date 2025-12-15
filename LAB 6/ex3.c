#include<stdio.h>
#include<limits.h>
int main(){
int n,max,smax,tmax;
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
 max =INT_MIN;
for(int i=0;i<n; i++) {
if(max<arr[i]) max = arr[i];
}
printf("1st largest is %d\n",max);
 smax=INT_MIN;
for(int i=0;i<n;i++){
if(arr[i]!=max && smax<arr[i])
 smax = arr[i];
}
 printf("2nd largest is %d",smax);
tmax=INT_MIN;
for(int i=0;i<n;i++){
if(arr[i]!=max && arr[i]!=smax && tmax<arr[i])
 tmax = arr[i];
}
 printf("\n3nd largest is %d",tmax);
 return 0;
}