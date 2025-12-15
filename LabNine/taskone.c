#include <stdio.h>
#include <string.h>
int mystrlen(char *str){
    char *r = str;
    int cnt = 0;
    for (; *r != '\0'; r++){
        cnt++;
    }
    printf("Length is :%d", cnt);
}
int main(){
    char val[10];
    printf("Enter Character:");
    gets(val);
    char *p = val;
    mystrlen(p);
    return 0;
}