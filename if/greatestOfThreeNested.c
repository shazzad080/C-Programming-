#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first Number");
scanf("%d",&a);
    printf("Enter the second NUmber :");
    scanf("%d",&b);
    printf("Enter the third Number :");
    scanf("%d",&c);
    if(a>b){
        if(a>c) printf("%d is greatest",a);
        else //c>a>b 
        printf("%d is greatest",c);
    }
    else{//b>a
    if(b>c) printf("%d is greatest",b);
    else //c>b>a
printf("%d is greatest",c);
    }
    return 0;
}