#include<stdio.h>

int main(){
    char str[40],a,A,e,E,i,I,o,O,u,U;;
    puts("Enter a string:");
    scanf("%[^\n]s",str);
    puts("The size of:");
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
      printf("%d\n",size);
    for(int i=0,j=size-1;i<=j;i++,j--){
        if((str[i]&&str[j])==(a||A||e||E||i||I||o||O||u||U)){ 
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        }
    }
    puts("The new string is:");
    puts(str);
    return 0;
}