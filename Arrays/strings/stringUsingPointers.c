#include<stdio.h>

int main(){
    char *canChange="Hey bro";
    puts(canChange);
    canChange="Hey";
    puts(canChange);
    char cannotChange[]="Hey bro";
    puts(cannotChange);
    // cannotChange ="Hey";
    puts(cannotChange);
    return 0;
}