#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,number,nguesses=1;
    srand(time(0));
    number=rand()%100+1;//generates a random number between 1 to 100
    // printf("The number is %d\n",number);
    // keep running the loop until the number is guesseg
    do{
      printf("Guess the number between 1 to 100\n");
      scanf("%d",&guess);
      if(guess>number){
        printf("Lower number please!\n");
      }
      else if(guess<number){
        printf("Higher number please!\n");
      }
      else{
        printf("You guessed it in %d attemps\n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}