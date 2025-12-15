#include<stdio.h>

#include<limits.h>
int main(){
int arr[] = {-5,-8,-107,-9,-4,-78,-5,-2};
int n = sizeof(arr)/4;
int mx = INT_MIN;
for(int i=0;i<n; i++) {
if(mx<arr[i]) mx = arr[i];
}
printf("%d",mx);
}