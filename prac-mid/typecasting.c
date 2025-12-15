#include<stdio.h>
double average(int,int);
int main(){
    int a=10,b=3;
    double avg=average(a,b);
    printf("%d %d %lf",a,b,avg);
    return 0;
}
double average(int a,int b){
    double avg;
    avg=((double)a+(double)b)/2;
    a=5;
    b=20;
    return avg;
}