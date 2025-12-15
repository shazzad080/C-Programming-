#include<stdio.h>
int main(){
    int x,y;
    printf("Enter A Value of x:");
    scanf("%d",&x);
    printf("Enter A Value of y:");
    scanf("%d",&y);
    if(x>0 && y>0) printf("1st Quadrant");
    else if(x<0 && y>0) printf("2nd Quadrant");
    else if(x<0 && y<0) printf("3rd Quadrant");
    else if(x==0 && y==0) printf("At Origin");
    else printf("4th Quadrant");
    return 0;
    }