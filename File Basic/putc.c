#include<stdio.h>
int main(){
    FILE *ptr;
     ptr=fopen("putcDemo.txt","w");
   fputc('c',ptr);
     fputc('c',ptr);
       fputc('c',ptr);
   fclose(ptr);
    return 0;
}