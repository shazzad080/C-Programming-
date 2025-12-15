#include<stdio.h>
int main(){
    int a,b,r;
    printf("Enter A Value of a:");
    scanf("%d",&a);
    printf("Enter A Value of b:");
    scanf("%d",&b);
    printf("Enter A Radius of a Circle:");
    scanf("%d",&r);
    
    if(a>0 && b>0) printf("1st Quadrant");
    else if(a<0 && b>0) printf("2nd Quadrant");
    else if(a<0 && b<0) printf("3rd Quadrant");
    else if(a==0 && b==0) printf("At Origin");
    else printf("4th Quadrant");
    return 0;
    }