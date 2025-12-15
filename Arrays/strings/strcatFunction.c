#include<stdio.h>
#include<string.h>
int main(){
    char firststr[]="Hello";
    char secstring[100]=" world";
    strcat(firststr,secstring);
    puts(firststr);
    return 0;
}