#include<stdio.h>
#include<string.h>
int main(){
    char firststr[]="Apple";
    char secstring[]="Banana";
    strcat(secstring,firststr);
    printf("%d\n",strcat);
    return 0;
}