#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,x,sum,sum1=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("1 + %d +",x);
    for(i=2;i<=n;i++){
        printf("(%d",x);
        for(j=2;j<=i;j++){
            printf("x%d",x);
            if(j>i){break;}
        }
        printf(") ");
        if(i<n){printf(" + ");}
        else{printf(" = ");}
    }
    for(k=1;k<=n;k++){
        sum1 = sum1 + pow(x,k);
    }
    sum = 1 + sum1;
    printf(" %d ",sum);
    return 0;
}
