#include<stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    // //swap
    // int temp;
    // temp=x;
    // x=y;
    // y=temp;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);

    return 0;
}