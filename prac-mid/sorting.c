#include<stdio.h>
int main(){
    int a[10],i,j,p;
    for(i=0;i<10;i++){
            printf("enter the value for index %d :",i);
            scanf("%d",&a[i]);
    }
    printf("\nthe element of array are as follows:\n");
     for(i=0;i<10;i++){
            printf(" %d\n",a[i]);
    }
            for(j=0;j<10;j++){
                for(p=0;p<10;p++){
                        if(a[p]>a[p+1]){
                        int temp=a[p];
                a[p]=a[p+1];
                a[p+1]=temp;
                        }

                }
            }
             for(j=0;j<10;j++){
                printf("%d ",a[j]);
             }

}