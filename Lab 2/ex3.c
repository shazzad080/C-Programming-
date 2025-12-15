#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 1st Number :");
    scanf("%d",&a);
    printf("Enter 2nd Number :");
    scanf("%d",&b);
    printf("Enter 3rd Number :");
    scanf("%d",&c);
    if((a%2==0 && b%2==0 && c%2!=0) || (a%2==0 && c%2==0 && b%2!=0) || (c%2==0 && b%2==0 && a%2!=0)){
      printf("2 of number is even\n");
      printf("1 of number is odd\n");
    }
    else if((a%2!=0 && b%2!=0 && c%2==0) || (a%2!=0 && c%2!=0 && b%2==0) || (c%2!=0 && b%2!=0 && a%2==0)){
      printf("2 of number is odd\n");
      printf("1 of number is Even\n");
    }

      
      if(a%2==0 && b%2==0 && c%2==0)
        printf("3 of number is even\n");
      else 
        printf("3 of number is odd\n");
    
       
    return 0;
}