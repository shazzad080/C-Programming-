#include <stdio.h>
#include <string.h>

int main(){
     FILE *fP;
    char arr[50] = "CSE is the worst subject.";
    fP=fopen("Create.txt", "w");
    if(fP==NULL){
        printf("Create.txt file failed to open.");
    }
    else{
        printf("The file is now opened.\n");
        if (strlen(arr) > 0) {
            fputs(arr,fP);
            fputs("\n",fP);
        }
        fclose(fP);
        printf("Data successfully written in file Create.txt\n");
        printf("The file is now closed.");
    }
    return 0;
}