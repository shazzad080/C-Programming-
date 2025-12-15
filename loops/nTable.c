#include<stdio.h>
int main(){
    int n;
    printf("Enter a NUmber :");
    scanf("%d",&n);
    for(int i=1;i<=10*n;i=i+1){
       if(i%n==0) printf("%d ",i);
    }
    }