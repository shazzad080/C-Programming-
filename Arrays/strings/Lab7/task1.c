#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main (){
    char str1[100];
    int count=0;
    printf("Enter : ");
    gets(str1);
    for (int i=0; i < strlen(str1); i++){
       str1[i] =  tolower(str1[i]);
    }
    for (int i=0; i < strlen(str1); i++){
        if (str1[i]==str1[strlen(str1)-1-i]){
            count++;
        }
    }
    if (count == strlen(str1)){
        printf("The string is a palindrome");
    }
    else{
        printf("The sring is not a palindrome");
    }
}