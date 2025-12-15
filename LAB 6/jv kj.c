#include<stdio.h>
int main() {
    int a[5],i;
    for(i=0;i<5;i++) {
        printf("Enter the input for index %d: ",i);
        scanf("%d",&a[i]);
    }
    printf(" Array elements are as follows: \n");
        for(i=0;i<5;i++) {
            printf("%d",a[i]);
            return 0;
        }
}