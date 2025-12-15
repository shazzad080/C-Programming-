#include<stdio.h>

int main()
{
  int x,y,sum=1,i,j,k;
  char ch=')';

  scanf("%d,%d", &x, &y);
  printf("1+");

  for(i=1;i<=y;i++)
  {
      for(j=1;j<=i;j++)
      {

          if(i>1 && j==1)
          printf("(");

          printf("%d", x);

          if(j<i)
            printf("*");

          if(i>1 && j==i)
          printf("%c", ch);


      }

      if(i<y)
        printf("+");

      k=pow(x,i);
      sum=sum+k;



  }


   printf("=%d", sum);


   return 0;



}