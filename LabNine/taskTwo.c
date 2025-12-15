#include <stdio.h>
#include <string.h>
char *pos_strstr(char*str, char*str1){
    int count=1,check=1;
    for(; *str!='\0';str++){
        if(*str==*str1){
            for(;*str1!='\0';str1+=count, str1+=count){
                if(*str!=*str1){
                    check=0;
                    break;
                }
                count++;
            }
        }
    }
    if(check==1){
        printf("%p\n",str-count);
    }
}
int main(){
    char str[100];
    char str1[100];
    char *p=str;
    char *q=str1;
    gets(str);
    gets(str1);
    pos_strstr(p,q);
    printf("%p",&str[3]);
}