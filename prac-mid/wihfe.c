#include<stdio.h>

int main(void){
    int x=998785,y=2,z;
    printf("%d\n",x%y);
    x=x%y;
    printf("%d\n",++x);
    printf("%d\n",x++);
    printf("%d\n",--y);
    for( ;y<2;++y) z*=y;
     printf("%d\n",y);
     printf("%d\n",x*y);
     x*=100;
      printf("%d\n",x/y);
     printf("%d\n",z);
    return 0;
}