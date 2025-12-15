#include <stdio.h>

int main() {
    int terms,i,sum=0;
    printf("Enter terms :");
    scanf("%d",&terms);
    int fib[terms];
    fib[0] = 0;
    fib[1] = 1;
   for(i=2;i<terms;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
   for(i = 0; i < terms; i++){
        sum += fib[i];
    }

    printf("Sum of the Fibonacci series: %d\n", sum);

return 0;
} 