// #include#include <stdio.h>

int main()
{
    int num, first = 0, second = 1, next, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
         sum+=first;
        next = first + second;
        first = second;
        second = next;
    }
    printf("The sum of the Fibonacci series is: %d\n", sum);
    return 0;
}
