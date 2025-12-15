#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first Side :");
    scanf("%d",&a);
    printf("Enter the second Side :");
    scanf("%d",&b);
    printf("Enter the third Side :");
    scanf("%d",&c);
if(a+b>c && a+c>b && b+c>a){
        printf("Valid Traingle\n");
         
     if(a==b && b==c)printf("The Triangle is equilateral");
     else if(a!=b && b==c || b!=c && a==c || c!=a && a==b)printf("The Triangle is Isosceles");
      else printf("The Triangle is Isosceles");}
       else printf("Invalid Traingle\n");
   
    return 0;
}