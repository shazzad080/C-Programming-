#include<stdio.h>
float convertTemp(float celsius);
float convert1Temp(float celsius);
int main(){
    float far=convertTemp(45),kelvin=convert1Temp(45);
    printf("Far Temp is :%f\nkelvin Temp is %f",far,kelvin);
    return 0;
}
float convertTemp(float celsius){
    float far=celsius*(9.0/5.0)+32;
    return far;
}
float convert1Temp(float celsius){
    float kelvin=celsius+273.15;
    return kelvin;
}