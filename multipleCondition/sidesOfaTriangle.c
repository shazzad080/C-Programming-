#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first Side :");
    scanf("%d",&a);
    printf("Enter the second Side :");
    scanf("%d",&b);
    printf("Enter the third Side :");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a) printf("Valid Traingle");
    else printf("Invalid Traingle");
    return 0;
}