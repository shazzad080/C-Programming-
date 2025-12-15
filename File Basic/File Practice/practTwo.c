/*Ques:Write a program to generate
multiplication table of a given number
in text format.Make sure that the file
is readable and well formatted.*/
#include<stdio.h>

int main(){
    FILE *ptr;
    int a;
    printf("Enter the integer you need the table of:");
    scanf("%d",&a);
    ptr=fopen("table.txt","w");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d x %d = %d\n",a,i,a*i);
    }
    fclose(ptr);
    return 0;
}