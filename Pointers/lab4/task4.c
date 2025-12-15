#include <stdio.h>

int main()
{
    int num, den, gcd, min, i;
    printf("Enter a fraction (numerator/denominator): ");
    scanf("%d/%d", &num, &den);
    min = (num < den) ? num : den;
    gcd = 1;
    for (i = 1; i <= min; i++){
        if (num % i == 0 && den % i == 0)
        {
            gcd = i;
        }
    }
    num = num / gcd;
    den = den / gcd;
    printf("The reduced fraction is: %d/%d\n", num, den);
    return 0;
}
