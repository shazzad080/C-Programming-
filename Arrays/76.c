#include<stdio.h>
int main(){
int arr[] = {5,8,1,9,4,7,5,2,8,10};
int n = sizeof(arr)/4;
int sum = 0;
for(int i=0;i<n; i++){
sum += arr[i];
}
printf("%d",sum);
return 0;
}