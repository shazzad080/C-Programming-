#include<stdio.h>
int main(){
    int n;
    printf("Enter a NUmber :");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
       // if(i%2!=0) printf("%d ",i);   (this is for odd number)
      // if(i%2==0) (for this method doesnt need to use if/else condition)
       printf("%d ",i);
    }
    }