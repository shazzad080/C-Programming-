#include<stdio.h>
#include<string.h>
int function(char*str){
    int result=0;
    int length=strlen(str);
    for (int k=0; k<length; k++){
        result*=26;
        result+=str[k]-'A'+1;
    }
    return result;
}
int main() {
    char excel[100];
    printf("Enter Excel column: ");
    scanf("%s", excel);

     int column = function(excel);
    printf("Column number: %d ", column);

    return 0;
}