#include<stdio.h>
int main(){
    int n,i,sum=0,digit=0,fact=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    for (i=n; i > 0; i=i/10){
        digit=i%10;
        fact=1;
        for(int j=1;j<=digit;j++){
            fact=fact*j;
        }
        sum+=fact;
    }
    if (sum==n){
        printf("%d is a Strong Number",n);
    }
    else{
        printf("%d is not a Strong Number",n);
    }
    return 0;
}