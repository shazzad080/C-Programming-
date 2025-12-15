#include<stdio.h>

int main(){
    FILE *fp;
     if((fp=fopen("my file","w"))==NULL){
        printf("Error Opening");
        exit(1);
    }
   char ch=fgetc(fp);
    int fgetc(FILE *fp);
    printf("%c",ch);
    printf("%c",fgetc(fp));
    printf("%c",fgetc(fp));
    printf("%c",fgetc(fp));
    printf("%c",fgetc(fp));
    fclose(fp);
 return 0;
}