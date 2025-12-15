#include <stdio.h>
#include <string.h>

int main(){
     FILE *fP;
    char arr[50] = "CSE is the worst subject.";
    fP=fopen("Create.txt", "r");
    if(fP==NULL){
        printf("Create.txt file failed to open.");
    }
    else{
        printf("The file is now opened.\n");
        printf("The value of my character is %c\n",fgetc(fP));
       while (fgets(arr,50,fP)!=NULL){
       printf("%s",arr);
       }
        fclose(fP);
        printf("Data successfully written in file Create.txt\n");
        printf("The file is now closed.");
    }
    return 0;
}