#include<stdio.h>

int main(){
    FILE *fptr;
    int num=45;
    fptr=fopen("generatered.txt","w");
    fprintf(fptr,"The number is %d\n",num);
    fprintf(fptr,"Thanks for using fptr");
    fclose(fptr);
    return 0;
}