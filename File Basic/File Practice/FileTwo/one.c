#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("shazzad.txt","w");
    // fscanf(fptr,"%c",&ch);
    fprintf(fptr,"%c",'a');
    fclose(fptr);
    return 0;
}