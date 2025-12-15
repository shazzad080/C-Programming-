#include<stdio.h>
#define Area(l,b)(l*b)
int main(){
    int l1=10,l2=5,area;
    area=Area(l1,l2);
    printf("Area is %d",area);
    return 0;
}