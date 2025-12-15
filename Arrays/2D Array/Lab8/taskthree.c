#include<stdio.h>
int main(){
int x,y,temp1,temp2,temp3;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d",&x);
    printf("Enter no of columns of 1st matrix: ");
    scanf("%d",&y);
    int arr[x][y];
    for (int i=0; i < x; i++){
        for (int j=0; j < y; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0; i < x; i++){
        for (int j=0; j < y; j++){
            if (i==0){
                if (arr[i][j] - arr[i][j-1] > 0  && arr[i][j] - arr[i][j+1] > 0 && arr[i][j] - arr[i+1][j] > 0){
                printf("peak (%d %d) :  %d",i,j ,arr[i][j]);
                printf("\n");
             }
            }
            else{
            if (arr[i][j] - arr[i][j-1] > 0  && arr[i][j] - arr[i][j+1] > 0 && arr[i][j] - arr[i+1][j] > 0 && arr[i][j] - arr[i-1][j] > 0){
                printf("peak (%d %d) :  %d",i,j ,arr[i][j]);
                printf("\n");
            }
            }
        }
    }
}