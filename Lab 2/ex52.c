#include <stdio.h>

int main() {
    int ticketNumber;
    printf("Enter the 6-digit ticket number: ");
    scanf("%d", &ticketNumber);
    if (ticketNumber < 100000 || ticketNumber > 999999) {
        printf("Invalid ticket number. Please enter a 6-digit number.\n");
        return 1;
    }
    int digit6 = ticketNumber % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit1 = (ticketNumber / 100000) % 10;
    if ((digit1 + digit3 + digit5) == (digit2 + digit4 + digit6)) {
        printf("Lucky ticket!\n");
    } else {
        printf("Not a lucky ticket");
    }

    return 0;
}
