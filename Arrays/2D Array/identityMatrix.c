#include<stdio.h>

int main(){
    int matrix[3][3],identity=1,r,c;
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&matrix[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
          if(r==c){
            if(matrix[r][c]!=1)identity=0;
          }
        else{
            if(matrix[r][c]!=0)identity=0;

          }
        }
    }
    if(identity) printf("Identity Matrix");
    else printf("Not Identity Matrix");
    return 0;
}