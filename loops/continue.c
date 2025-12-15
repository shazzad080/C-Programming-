#include<stdio.h>

int main(){
    for (int i=1;i<=10;i++){
        if(i==3||i==8||i==6){//skip
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}