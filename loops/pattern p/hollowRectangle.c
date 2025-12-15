#include<stdio.h>

int main(){
    int x,y;
    printf("Enter width:");
    scanf("%d",&x);
    printf("Enter Breadth:");
    scanf("%d",&y);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(i==1||i==x||j==1||j==y)printf("* ");
            else printf("  ");
        }
             printf("\n");
        // printf(" ");
    }
     printf("\n");
    return 0;
}