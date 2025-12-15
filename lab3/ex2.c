#include<stdio.h>
int main(){
    int n,a;
    printf("Enter a NUmber :");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
       if(i%2==0){
          a=i*i;
        if(a<=n)printf(" %d ",a);
         }
    }
    }