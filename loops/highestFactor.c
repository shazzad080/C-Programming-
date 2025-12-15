#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int hf;
    for(int i=1;i<=n-1;i++){
    if(n%i==0) hf=i;
    }
    printf("Highest factor is: %d ",hf);
}