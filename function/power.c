#include<stdio.h>
#include<math.h>
void calculatePrice(float value);
int main(){
    // float value=100.0;
    // calculatePrice(value);
    // printf("Value is :%f\n",value);
    int n=4;
    printf("%f",pow(n,2));
    return 0;
}
void calculatePrice(float value){
    value=value+(0.18*value);
    printf("Final price is :%f\n",value);
}