#include<stdio.h>
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d\n",x,y);
}
int main(){
   int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d %d\n",x,y); 
    swap(x,y);
    return 0;
}