#include<stdio.h>

int main(){
    FILE *ptr;
    int num,num2;
    ptr=fopen("Shazzad.txt","r");
    if(ptr==NULL){
        printf("The file does not exist\n");
    }
    else{
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
     fclose(ptr);
    printf("the value of num is %d\n",num);
    printf("the value of num is %d\n",num2);
    }
    return 0;
}