#include<stdio.h>

int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr);// * means Value ,& means address
    return 0;
}