#include<stdio.h>

int main(){
    int r,c,size,count=0;
    size=(r*c)/2;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             if(arr[i][j]==0)count++;
        }
        printf("\n");
     }
     if(count>size){
        printf("matrix is sparse");
     }
    return 0;
}