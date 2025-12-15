#include<stdio.h>
#include<stdlib.h>
int main(){
    int num=100;
    char ch='a';
    FILE *fp;
    if((fp=fopen("myyfile.bin","wb"))==NULL){
        printf("Error");
        exit(1);
    }
    fwrite(&num,4,1,fp);
    if(fwrite(&num,sizeof(int),1,fp)!=1){
         printf("Write Error");
        exit(1);
    }
    fclose(fp);
    return 0;
}