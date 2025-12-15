#include<stdio.h>
#include<stdlib.h>
int main(){
    int num=10,numread;
    float num2=1.1,num2read;
    char str[100]="Hello World",strread[100];
    FILE *fp;
    if((fp=fopen("myfilee.txt","w"))==NULL){
        printf("Error");
        exit(1);
    }
    fprintf(fp,"%d %f %s",num,num2,str);
    if(ferror(fp)){
        printf("Write Error");
        exit(1);
    }
    fclose(fp);
     if((fp=fopen("myfilee.txt","r"))==NULL){
        printf("Error");
        exit(1);
    }
    fscanf(fp,"%d %f %s",&numread,&num2read,strread);
    if(ferror(fp)){
        printf("Write Error");
        exit(1);
    }
    printf("%d %f %s",numread,num2read,strread);
    fclose(fp);
    return 0;
}