#include<stdio.h>

int main(){
    char arr[]={'r','a','f','v'};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    return 0;
}