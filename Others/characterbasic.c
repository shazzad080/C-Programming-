#include<stdio.h>
int main(){
    int n,i,j,arr1[100],arr2[100];
    printf("Input the value n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("[");
    for(i=0;i<n;i++){
        printf("[");
        printf("%d",arr1[i]);
        printf("],");
    }
    for(int k=2;;k++){
    for(i=0;i<n;i++){
        printf("[");
         for(j=i;j<i+k;j++){
                printf("%d,",arr1[j]);

         }
        printf("],");
    }
    if(k>n-2)
        break;
    }
    printf("]");



}
