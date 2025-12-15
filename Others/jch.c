#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int arr[123] = {0};  // Array to count characters (ASCII values from 0 to 122)
    
    // Input
    printf("Enter first word: ");
    gets(str1);
    printf("Enter second word: ");
    gets(str2);
    
    // Counting characters for the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        arr[str1[i]]++;
    }

    // Reducing the count for the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        arr[str2[i]]--;
    }

    // Checking if all counts are zero, meaning the words are anagrams
    for (int i = 0; i < 123; i++) {
        if (arr[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }

    // If the program reaches this point, the words are anagrams
    printf("Anagram\n");
    return 0;
}

