#include <stdio.h>
int main() {
  int x;
  printf("Enter a number");
  scanf("%d",&x);
  if(x>0) printf("Positive Number");
 //if (x<0) printf("Negative Number");
  else  printf("Negative Number");
//  if(x==0) printf("Number is Zero");
 return 0;
}