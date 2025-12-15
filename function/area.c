#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);
int main(){
      float a,b,side,rad;
    char ch;
    printf("Enter the letter :");
    scanf("%c",&ch);
    if(ch=='s'){
        printf("Area is %f",squareArea(side));
    }
    else if(ch=='c'){
        printf("Area is %f",circleArea(rad));
    }
    else if(ch=='r'){
        printf("Area is %f",rectangleArea(a,b));
}
else printf("Invalid Letter!!!!!!");
    return 0;
}
float squareArea(float side){
    printf("Enter side of a square :");
    scanf("%f",&side);
    return side*side;
}
float circleArea(float rad){
    printf("Enter radius of a circle :");
    scanf("%f",&rad);
    return 3.1416*rad*rad;
}
float rectangleArea(float a,float b){
     printf("1st side is :");
    scanf("%f",&a);
    printf("2nd side is :");
    scanf("%f",&b);
    return a*b;
}
