#include<stdio.h>
int main(){
    int m;
    printf("Enter no of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter no of cols : ");
    scanf("%d",&n);
    
    // nested loops
    for(int i=1;i<=m;i++){//rows
        for(int j=1;j<=n;j++){//col
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
