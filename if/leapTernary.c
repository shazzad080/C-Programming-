#include<stdio.h>
int main(){
    int x;
    printf("Enter the Year :");
    scanf("%d",&x);
   if(x%400==0 || (x%4==0 && x%100!=0)) printf("Leap year");
    else printf("Not a Lea4p Year");
    // (x%400==0 || (x%4==0 && x%100!=0)) ? printf("Leap year"):printf("Not a Leap Year");
    // Ternary Condition:
    //Condition ? True : False ;
    return 0;
}