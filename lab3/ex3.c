#include <stdio.h>
int main() {
  int num,digit,terms=0;
  printf("Enter Number: ");
  scanf("%d",&num);
  for (int n=num;n>0;n/=10) {
    digit=n%10;
    if(num%digit==0)terms++;
  }
  printf("Number of terms %d\n",terms);
  return 0;
}