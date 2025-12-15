// Student ID:220021108

#include <stdio.h>
int n,rows,cols;
void fdF(int gd[rows][cols],int x,int y,int island,int *area) {
    if(x<0||x>=rows||y<0||y>=cols||gd[x][y]!=island){
        return;
    }
    (*area)++;
    gd[x][y]=0;
    fdF(gd,x+1,y,island,area);
    fdF(gd,x-1,y,island,area);
    fdF(gd,x,y+1,island,area);
    fdF(gd,x,y-1,island,area);
    fdF(gd,x+1,y+1,island,area);
    fdF(gd,x-1,y-1,island,area);
    fdF(gd,x+1,y-1,island,area);
    fdF(gd,x-1,y+1,island,area);
}
int main(){
    printf("Enter Number of island:");
    scanf("%d",&n);
    printf("Enter row & column:");
    scanf("%d %d",&rows, &cols);
    int gd[rows][cols];
    printf("Enter Element:");
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            scanf("%d",&gd[i][j]);
        }
    }
    int maxArea=0;
    int islandWithMaxArea=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(gd[i][j]!=0){
                int currentArea=0;
                int currentIsland=gd[i][j];
                fdF(gd,i,j,currentIsland,&currentArea);
                if(currentArea>maxArea){
                    maxArea=currentArea;
                    islandWithMaxArea=currentIsland;
                }
            }
        }
    }
    printf("Output:\n%d %d\n", islandWithMaxArea, maxArea);
    return 0;
}
