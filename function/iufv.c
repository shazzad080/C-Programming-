#include<stdio.h>

int main(){
    int sum=0;
    int num;
    do{
        // printf("num:");
        scanf("%d",&num);
        sum+=num;
    }
    while(num);
    printf("sum: %d",sum);
}