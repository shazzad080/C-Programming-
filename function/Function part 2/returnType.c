#include<stdio.h>
int min(int x,int y){ //formal Parameters(variables/containers)
    if(x<y)return x;
    else return y;
}
int main(){
    int a,b;
    printf("Enter 1st Number :");
    scanf("%d",&a);
    printf("Enter 2st Number :");
    scanf("%d",&b);
    int m=min(a,b); //Actual Parameters(the actual values)
    printf("Minimum of %d & %d is %d",a,b,m);
    return 0;
}