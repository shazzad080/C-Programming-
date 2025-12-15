#include<stdio.h>
int main(){
    int arr[4][2]={{76,80},{88,82},{82,91},{71,98}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
       printf("\n");
    for(int j=0;j<2;j++){
        for(int i=0;i<4;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // return 0;
}