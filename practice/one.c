#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("Shazzad.txt","w");
    fclose(fptr);
    return 0;
}