#include<stdio.h>

int main(){
    float radius,pi,height;
    pi=3.1416;
    printf("Input the Radius of a Circle  :");
    scanf("%f",&radius);
    printf("Input the Height of a Cylinder:");
    scanf("%f",&height);
    printf("The Area of a Circle is :%f m^2\n",pi*radius*radius);
    printf("The volume of a Sphere  :%f m^3\n",4*pi*radius*radius);
    printf("The Volume of a cylinder:%f m^3",pi*radius*radius*height);
 return 0;
}