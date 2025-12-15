
#include<stdio.h>
int main(){
    int n,i,term,sum;
    printf("Input the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum+term;
         term= 9+term*10;
        printf("%d ",term);
    }
    printf("\nThe sum of the series = %d",sum);
    return 0;

}

