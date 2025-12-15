#include<stdio.h>
int even (int ,int , int);
int main(){
    int a,b,c;
    int count = 0;
    int d2= 0;
    printf("Enter 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);

    count = even(a , b , c);
    d2 = 3- count;

    if (count > d2) printf("%d of the numbers are even \n %d of the numbers are odd \n", count ,d2);
    else printf (" %d of the numbers are odd \n %d of the numbers are even \n", d2 , count);

    return 0;
}
int even (int a, int b, int c){
    int count = 0;
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;

    return count;
}