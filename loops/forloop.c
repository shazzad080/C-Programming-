#include<stdio.h>

int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
         sum+=i ;//sum=sum+i;
         printf("%d\n",i);
       }
     printf("sum is %d",sum);
     
    return 0;
}