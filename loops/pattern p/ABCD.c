#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=65;i<=n+64;i++){
        for(int j=65;j<=n+64;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}