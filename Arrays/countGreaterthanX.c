#include<stdio.h>

int main(){
    int arr[]={5,9,7,2,4,5,6,7,9};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
    }
    printf("\n");
    int x=10;//change
    int count=0;
    // for(int i=0;i<n;i++){
    //  if(i%2!=0)arr[i]*=2;
    //  else arr[i]+=10;
    // }
    // for(int i=0;i<n;i++){
    //       printf("%d ",arr[i]);
    // }
    for(int i=0;i<n;i++){
       if(arr[i]>x)count++;
    }
    printf("\ncount is:%d",count);

    return 0;
}