#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={17,12,31,4,10,5,6,7};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int x=10;
    bool u=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            u=true;
            break;
        }
    }
    if(u==true) printf("%d Exists!",x);
    else  printf("%d does not Exists!",x);
    return 0;
}