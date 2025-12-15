#include <stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf("%c",&ch);
    for (i=strlen(str)-1;i>=0;i--){
        if(str[i]==ch){
            break;
        }
    }
    if (i==-1)printf("No match\n");
    else{
        for (j=i+1;str[j]!='\0';j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
