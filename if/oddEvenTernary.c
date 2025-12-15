#include <stdio.h>
int main() {
  int x;
  printf("Enter a number :");
  scanf("%d",&x);
  /*if(x%2==0) printf("Even Number");
 // if (x%2!=0) printf("odd Number");
  else printf("odd Number");*/
   // Ternary Condition:
    //Condition ? True : False ;
  (x%2==0) ? printf("Even Number") : printf("odd Number");
 return 0;
}