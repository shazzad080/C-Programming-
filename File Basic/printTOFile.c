#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100]="Hello World";
    FILE *fp;
    char *p;
    int check;
    if((fp=fopen("my file","w"))==NULL){
        printf("Error Opening");
        exit(1);
    }
    p=str;
    while (*p){
    check=fputc(*p,fp);
    if(check==EOF){
        printf("Error Writing");
        exit(1);
    }
    p++;
    }
    fclose(fp);
    return 0;
}