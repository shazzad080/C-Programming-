#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("sshazzad.txt","r");
    printf("%c\n",fgetc(fptr));
        printf("%c\n",fgetc(fptr));
            printf("%c\n",fgetc(fptr));
                printf("%c\n",fgetc(fptr));
                    printf("%c\n",fgetc(fptr));
    // fscanf(fptr,"%c",&ch);
    // fprintf(fptr,"%c",'a');
    fclose(fptr);
    return 0;
}