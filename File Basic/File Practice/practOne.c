/*Ques:Write a program to read three
integers from a file.*/
#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr=fopen("practOne.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    fclose(ptr);
    printf("The values of a b & c is %d %d %d\n",a,b,c);
    return 0;
}