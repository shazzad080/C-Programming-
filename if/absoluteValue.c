#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
   if(x>=0) printf("Absolute Value is  %d",x);
    if(x<0){
        //make it positive
        x=x*(-1);
        printf("Absolute Value is  %d",x);
    }                             
return 0;
}
