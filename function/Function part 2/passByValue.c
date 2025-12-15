#include<stdio.h>
void oddEven(int x){
    if(x%2==0)printf("%d is Even",x);
    else printf("%d is Odd",x);
    return; // return means End
}
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    oddEven(a);
    return 0;
}