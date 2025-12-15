#include<stdio.h>

int main(){
    printf("\n");
    int x=90;
    int* z=&x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",z);
    printf("%p\n",&z);
    printf("%d\n",*z);// * means dereference operator=star operator
    printf("\n");
    return 0;
}