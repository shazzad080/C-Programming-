#include <stdio.h>

int main()
{
    int dec,oct=0,rem,i=1;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    for (dec;dec>0;dec=dec/8){
        rem=dec%8;
        oct+=rem*i;
        i=i*10;
    }
    printf("The octal number is: %d\n", oct);
    
    return 0;
}
