#include<stdio.h>
void Assalamualaikum();
void Namaste();
int main(){
    char ch;
    printf("Enter b for Bangladeshi & i for Indian :");
    scanf("%c",&ch);
    if(ch=='b'){
        Assalamualaikum();
    }
    else {
        Namaste();
    }
    return 0;
}
void Assalamualaikum(){
    printf("Assalamualikum\n");
}
void Namaste(){
    printf("Namaste\n");
}