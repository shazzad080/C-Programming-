#include <stdio.h>
int main() {
    char ch;//+,-,*,/
   printf("Enter the Operator :");
  scanf("%c",&ch);
  int a,b;
  printf("Enter 1st number :");
  scanf("%d",&a);
   printf("Enter 2nd number :");
  scanf("%d",&b);
  //if else
 /* if(ch=='+') printf("%d",a+b);
  else if(ch=='-') printf("%d",a-b);
   else if(ch=='*') printf("%d",a*b);
    else if(ch=='/') printf("%d",a/b);
    else printf("Invalid Operator");*/
    //switch 
    /*Switch(integer expression){
    case constant1:
    do this;
    case constant2:
    do this;
    case constant3:
    do this;
    default:
    do this;
    }  */
    switch (ch){
    case '+': printf("%d",a+b);break;
    case '-': printf("%d",a-b);break;
    case '*': printf("%d",a*b);break;
    case '/': printf("%d",a/b);
    default:printf("Invalid Operator");
    }
    return 0;
}