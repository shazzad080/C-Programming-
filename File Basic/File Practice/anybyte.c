#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    long loc;
    FILE *fp;
     if((fp=fopen("myyfile.bin","rb"))==NULL){
        printf("Error");
        exit(1);
    }
    if(fseek(fp,0l,SEEK_END)){
        printf("Error");
        exit(1);
    }
    loc=ftell(fp);
    while(loc!=0){
        ch=fgetc(fp);
        printf("%c",ch);
        loc--;
        if(fseek(fp,loc,SEEK_END)){
            printf("Error");
            exit(1);
        }
    }
    fclose(fp);
    return 0;
}