#include<stdio.h>

int main(){
    int vals[100],*a;
    a=vals;
    vals[0]=5;
    vals[1]=6;
    printf("%d",*a);
    a++;
    printf("\n%d",*a);
    return 0;
}