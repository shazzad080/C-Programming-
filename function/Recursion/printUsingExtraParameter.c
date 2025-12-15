#include<stdio.h>
void print(int x,int n){
    if(x>n) return;//base case
    printf("%d\n",x);//work
    print(x+1,n);//call
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    print(1,n);
    return 0;
}