#include<stdio.h>
#include<string.h>
int countLength(char arr[]){
    int count=0;
   for(int i=0;arr[i]!='\0';i++){
    count++;
   }
   return count-1;
}
int main(){
    char name[]="Shazzad";
    // fgets(name,100,stdin);
    // int len=strlen(name);//strlen fuction is measuring the length of the array
    printf("Length is %d",strlen(name));
    // printf("\nLength is %d",countLength(name));
    return 0;
}