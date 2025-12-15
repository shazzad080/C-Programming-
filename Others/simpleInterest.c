#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("p:");
  scanf("%f",&p);
  printf("r:");
   scanf("%f",&r);
   printf("t:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("your simple interest is %f",si);
    return 0;
}