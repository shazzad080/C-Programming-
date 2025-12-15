#include<stdio.h>

int main(){
    printf("\n");
    int x=9,y=9;
    int* z1=&x;
    int* z2=&y;
    printf("%p\n",z1);
    printf("%p\n",z1);
    printf("\n\n",z1);

    return 0;
}