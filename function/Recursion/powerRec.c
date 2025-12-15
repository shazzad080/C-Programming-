#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter base a:");
    scanf("%d",&a);
    printf("Enter power b:");
    scanf("%d",&b);
  printf("%d raised to power %d is: %d",a,b,power(a,b));
    return 0;
} 