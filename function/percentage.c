#include<stdio.h>
int calpercentage(int science,int math,int english);
int main(){
    int s=97,m=99,e=85;
    printf("Percentage is :%d",calpercentage(s,m,e));
    return 0;
}
  int calpercentage(int science,int math,int english){
   float percentage=((science+math+english)/3);
   return percentage;
}



