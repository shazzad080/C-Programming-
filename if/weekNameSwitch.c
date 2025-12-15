#include <stdio.h>
int main(){
  int x;
  printf("Enter 1st number :");
  scanf("%d",&x);
  switch (x){
    case 1: printf("Mon");break;
    case 2: printf("Tues");break;
    case 3: printf("Wed");break;
    case 4: printf("Thrus");break;
    case 5: printf("Fri");break;
    case 6: printf("Sat");break;
    case 7: printf("Sun");
    default:printf("Invalid Day");
    }
    return 0;
}