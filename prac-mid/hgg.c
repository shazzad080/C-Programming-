#include<stdio.h>
#include<math.h>

void f1(int ,float);
int x,y;
int main(){
    int x,y;
    int a=15;
    float b=2.0;
    x=10;
    y=5;
    f1(a,b);
    printf("%d %f %d %d",a,b,x,y);
    return 0;
}
void f1(int a,float b){
 printf("%d %f %d %d\n",a,b,x,y);
 x=-10;
 y=55;
 return;
}