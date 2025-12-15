#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;
    if((fp=fopen("my file","w"))==NULL){
        printf("Error Opening");
        exit(1);
    }
    while(1){
        ch=fgetc(fp);
        if((ch=fgetc(fp))==EOF)
        break;
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    return 0;
}
