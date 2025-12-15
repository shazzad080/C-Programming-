#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of Terms :");
    scanf("%d",&n);
   // Method 1 :
    // for(int i=1;i<=2*n-1;i=i+2){
    //    printf("%d ",i);
    // Method 2 :
    int a=1;
    for(int i=3;i<=n;i=i=i+2){
        printf("%d ",a);
        a=a*4;
    }
    }