#include<stdio.h>
void print(int n){
    if(n==0) return;//base case
     printf("%d\n",n);//work
    print(n-1);//call
     printf("%d\n",n);//work
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    print(n);
    return 0;
}