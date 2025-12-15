
#include <stdio.h>
int main() {
  int num,digit,sum=0;
  printf("Enter an integer of any length: ");
  scanf("%d",&num);
  for (int n=num;n>0;n/=10) {
    digit=n%10;
    sum+=digit;
  }
  printf("The sum of the digits is %d\n", sum);
  return 0;
}
