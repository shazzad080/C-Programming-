#include <stdio.h>
int isLuckyTicket(int ticketNumber) {
    int oddSum = 0, evenSum = 0;
    int position = 1;

    while (ticketNumber > 0) {
        int digit = ticketNumber % 10;
        if (position % 2 == 1) {
            oddSum += digit;
        } else {
            evenSum += digit;
        }
        position++;
        ticketNumber /= 10;
    }
    return oddSum == evenSum;
}
int main() {
    int ticketNumber;
    printf("Enter the 6-digit ticket number: ");
    scanf("%d", &ticketNumber);
    if (ticketNumber < 100000 || ticketNumber > 999999) {
        printf("Invalid ticket number. Please enter a 6-digit number.\n");
        return 1; 
    }
    if (isLuckyTicket(ticketNumber)) {
        printf("Lucky ticket!\n");
    } else {
        printf("Not a lucky ticket.\n");
    }

    return 0;
}
