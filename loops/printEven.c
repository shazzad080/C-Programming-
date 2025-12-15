#include<stdio.h>
int main(){
    int n;
    printf("Enter a NUmber :");
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
       // if(i%2!=0) printf("%d ",i);   (this is for odd number)
       if(i%2==0) printf("%d ",i);
    }
    }