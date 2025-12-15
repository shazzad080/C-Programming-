#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter Number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       fact=fact*i;
    }
            printf("Final Factorial is :%d\n",fact);
        
    return 0;
}   