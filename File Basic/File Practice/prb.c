#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    FILE *fp;
    if((fp=fopen("myyfile.bin","rb"))==NULL){
        printf("Error");
        exit(1);
    }
    // fwrite(&num,4,1,fp);
    if(fread(&num,sizeof num,1,fp)!=1){
        if(ferror(fp)){
         printf("Write Error");
        exit(1);
        }
        else {
            printf("File Empty");
        }
}
    fclose(fp);
    printf("%d",num);
    return 0;
}