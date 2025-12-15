#include <stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    if((fp = fopen("taskFour.c","r")) == NULL){
        printf("Error");
        exit(1);
    }
    char ch = fgetc(fp);
    while (ch != EOF) {   
        printf("%c", ch);
        ch = fgetc(fp); 
    }
    fclose(fp);
}