#include<stdio.h>

int main(){
    FILE *fp;
    char name[14];
    fp=fopen("names.txt","r");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    while(1){
        if(fgets(name,14,fp)==NULL)
        break;
        if(ferror(fp)!=0){
            printf("Error");
            exit(1);
        }
        puts(name);
    }
    fclose(fp);
    return 0;
}
// while(1){
//         ch=fgetc(fp);
//         if((ch=fgetc(fp))==EOF)
//         break;
//         printf("%c",fgetc(fp));
//     }