#include<stdio.h>
int main(){
    for(int i=0;i<12;i++){
        for(int j=0;j<19;j++){
            if(i==0){
                if(j==9) printf("*");
                else printf(" ");
            }
            else if(i<6 && i>0){
                if(j<8) printf(" ");
                else if(j>7 && j<11) printf("*");
            }

            else if(i>5 && i<9) {
                if(j==3 || j==7 || j==11 || j==15) printf(" ");
                else printf("*");
            }
            else printf("*");
        }
        printf("\n");
    }

    return 0;
    }