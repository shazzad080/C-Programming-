#include<stdio.h>

// int main(){
//     FILE *fp;
//     fp=fopen("my file","r");
//     if(fp==NULL){
//         printf("file could not be opened");
//         // exit(1);
//     }
//     else printf("Open file");
//    fclose(fp);
//     return 0;
// }
int main(){
    FILE *fp;
     if((fp=fopen("my file","r"))==NULL){
        printf("Error");
        // exit(1);
    }
    else printf("Open file");
    fclose(fp);
 return 0;
}