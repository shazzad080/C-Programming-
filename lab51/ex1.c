#include <stdio.h>
int f1(int,int);
long factorial(int number);
int main() {
    int x,n;
    double sum=0.0,term=1.0;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    long factorial(int number){
        long result = 1;
        for (int l = 1; l <= number; l++) {
            result *= l;
        }
        return result;
    }
    printf("(%d^0)/(1)",x);
    for (int i = 1; i <= n; i++) {
        printf(" + (%d^%d)/(", x, i);
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" * ");
            }
        }
        printf(")");
    }
    for (int k=0;k<=n;k++){
        sum +=term;
        term *=(double)x/(k + 1);
    }
printf("= %.3lf\n", sum);
    return 0;
}
