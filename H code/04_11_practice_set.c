#include<stdio.h>

int main(){
    int n;
    printf("Multiplication Table of :");
    scanf("%d",&n);
    for (int i = 10; i; i--)
    {
        printf("n x %d = %d\n",i,10*i);
    }
    
    return 0;
}