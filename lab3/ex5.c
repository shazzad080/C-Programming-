#include <stdio.h>

int main() {
  int rounds,alice,bob,alicescore=0,bobscore=0; 
  printf("Enter the number of rounds: "); 
  scanf("%d",&rounds); 
  for (int i=1;i<=rounds;i++) {
    printf("Round %d\n",i); 
    printf("Enter the meters run by Alice: "); 
    scanf("%d",&alice);
    printf("Enter the meters run by Bob: "); 
    scanf("%d",&bob);
    if(alice>bob){
      printf("Alice wins this round.\n");
      alicescore++;
    }
    else if(bob>alice){
      printf("Bob wins this round.\n");
      bobscore++;
    }
    else printf("It's a draw.\n");
  }
  printf("\nFinal Scores:\n");
  printf("Alice: %d\n", alicescore);
  printf("Bob: %d\n", bobscore);
  if (alicescore>bobscore)printf("Alice winner\n");
  else if (bobscore>alicescore)printf("Bob winner\n");
  else printf("No one wins.\n");
  return 0; 
}
