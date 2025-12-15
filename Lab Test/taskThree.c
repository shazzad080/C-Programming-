#include<stdio.h>
#include<string.h>

int function(char*string){
    int result = 0;
    int length = strlen(string);

    for (int i=0; i<length; i++){
        result *= 26;
        result += string[i] - 'A'+1;
    }
    return result;
}

int main() {
    char excel[100];
    printf("Enter the Excel column title: ");
    scanf("%s", excel);

     int column = function(excel);
    printf("Required column number: %d ", column);

    return 0;
}