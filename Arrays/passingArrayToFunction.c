#include<stdio.h>
void change(int x[]){
    x[2]=90;
}
int main(){
    int arr[5]={5,4,7,8,9};
    printf("%d\n",arr[2]);
    change(arr);
    printf("%d\n",arr[2]);

    return 0;
}