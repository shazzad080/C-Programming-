#include<stdio.h>

int main(){
    char str[100];
    int k,nw=0;
    printf("Enter the string:");
    gets(str);
    for(int k=0;str[k];k++){
        if(str[k]==32){
            nw++;
            }
    }
    if(k>0){
     nw++;
    }
 printf("%d",nw);
    return 0;
}