#include <stdio.h>
int main(){
int i, j, k;
for(i=0, j = 0 ; i < 5 , j < 5 ;i++, ++j){
printf("Inside for loop %d %d\n", i, j);
} 
while (++ i < 12 && j++ < 12){
printf("Inside while loop %d %d\n", i, j); 
for (k = 0; k < 3; ++k, ++i, ++j){
printf("Inside nested for loop %d %d %d\n", i, j, k);
}
}
return 0;
}