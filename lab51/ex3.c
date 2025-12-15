#include<stdio.h>
int main() {
    int n,i,j,I,J;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (I=n-1;I>=1;I--) {
        for (J=1;J<=I;J++) {
            printf("%d ",J);
        }
        printf("\n");
    }
   return 0;
}