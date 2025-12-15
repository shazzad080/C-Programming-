#include<stdio.h>

int main(){
    printf("\n");
    int x=3;
    int* z=&x;
    printf("%d\n",x);
    *z=7;
    printf("%d",x);
    return 0;
}