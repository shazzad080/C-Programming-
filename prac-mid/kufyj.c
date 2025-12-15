#include<stdio.h>

int main(){
    int a=25,b=3,c,d,e;
    b*=a;
    c=b++;
    a-=c=--a;
    d=++c%b;
    e=b/c;
    printf("%d\n",a);
      printf("%d\n",b);
        printf("%d\n",c);
          printf("%d\n",d);
            printf("%d",e);
    return 0;
}