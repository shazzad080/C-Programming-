#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first Number :");
scanf("%d",&a);
    printf("Enter the second NUmber :");
    scanf("%d",&b);
    printf("Enter the third Number :");
    scanf("%d",&c);
   /* if(a>c && a>b) printf("%d is the greatest",a);
    if(b>c && a<b) printf("%d is the greatest",b);
     if(a<c && c>b) printf("%d is the greatest",c);*/
      if(a>=c && a>=b) printf("%d is the greatest",a);
    else if(b>=c && a<=b) printf("%d is the greatest",b);
    else printf("%d is the greatest",c);
    return 0;
}