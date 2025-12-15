#include<stdio.h>

int main(){
    int i=0,n=7,factorial=1;
    printf("Input the Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The Value of Factorial %d is %d",n,factorial);
    return 0;
}