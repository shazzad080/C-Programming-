#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number");
   scanf("%d",&x);//&& this stand for and
   // if(x>99 && x<1000) printf("Three Digit NUmber");
  //  else printf("Not a Three Digit NUmber");
  if(x%5==0 || x%3==0) printf("Divisible by 5 or 3"); // || stand for logocal or
  else printf("Not Divisible by 5 or 3");
    return 0;
}