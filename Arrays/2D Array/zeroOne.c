#include<stdio.h>

int main(){
    int r,c,maxcount=0,count=0,maxidx=-1;
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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==1)count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
        printf("\n");
     }
     printf("maxcount is %d   %d",maxcount,maxidx);
    return 0;
}