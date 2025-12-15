#include<stdio.h>
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    printf("\n");
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    printf("\n");
    return 0;
}
