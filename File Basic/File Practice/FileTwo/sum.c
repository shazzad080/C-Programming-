#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("Sum.txt","r");
int a,b;
fscanf(fptr,"%d %d",&a,&b);
fclose(fptr);
  fptr=fopen("Sum.txt","w");
  fprintf(fptr,"%d",a+b);
  fclose(fptr);
    return 0;
}