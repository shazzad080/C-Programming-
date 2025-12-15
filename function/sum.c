#include<stdio.h>
int sum(int a, int b);
void printTable(int n);
int main(){
    // int a,b;
    // printf("Enter 1st number :");
    // scanf("%d",&a);
    // printf("Enter 2nd number :");
    // scanf("%d",&b);
    // int s=sum(a,b);
    // printf("sum is %d",s);
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    printTable(n);//argument/actual parameter
    return 0;
}
int sum(int x,int y){
    return x+y;
}
void printTable(int n){//parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
}