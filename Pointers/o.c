#include<stdio.h>

int main(){
    int num,*p;
    p=&num;
    num=10;
    *p=50;
    printf("%d %d",num,*p);
    printf("\n%d %p",num,p);
     printf("\n%p %d",&num,*p);
    return 0;
}