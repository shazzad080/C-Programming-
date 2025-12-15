#include <stdio.h>
#include <string.h>
int myatoi(char*p){
    char *q=p;
    for(;*q!='\0';q++){
        if(*q>='0'&&*q<='9'){
            printf("%c",*q);
        }else{
            break;
        }
    }
}
int main(){
    char num[10];
    gets(num);
    char *p=num;
    myatoi(p);
}