#include<stdio.h>
int main(){
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    int r= a % b;
    printf("%d",r);
    return 0;
}