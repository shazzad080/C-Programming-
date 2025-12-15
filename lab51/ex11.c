#include <stdio.h>
long factorial(int number);
int main() {
    int x, n;
    double sum = 1.0; 
    long factorial(int number){
        long result = 1;
        for (int k = 1; k <= number; k++) {
            result *= k;
        }
        return result;
    }

    printf("Enter the values of x and n: ");
    scanf("%d %d", &x, &n);
    printf("(%d^0)/(1)",x);
    for (int i = 1; i <= n; i++) {
        long fact = factorial(i);
        sum += (double)x / fact;
        printf(" + (%d^%d)/(", x, i);
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" * ");
            }
        }
        printf(")");
    }
    printf(" = %.3f\n", sum);
    return 0;
}
