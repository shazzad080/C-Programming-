#include<stdio.h>

int main(){
    float celsius,far;
    printf("The Temperature in celsius :");
    scanf("%f",&celsius);
    printf("Fahrenheit Temperature is :%f",(celsius*9/5)+32);
    return 0;
}