#include<stdio.h>
int main(){
    int physics,chemistry,biology,mathematics,computer;
    float totalmarks,percentage;
    char Grade;
    printf("Enter marks:");
    scanf("%d %d %d %d %d",&physics,&chemistry,&biology,&mathematics,&computer);
    totalmarks=physics+chemistry+biology+mathematics+computer;
    percentage= (totalmarks/500.0 )*100.0;
    if(percentage>=80){
        Grade ='A';
    }else if(percentage>=75){
        Grade ='A';
    }else if(percentage>=70){
        Grade ='B';
    }else if(percentage>=65){
        Grade ='C';
    }else if(percentage>=60){
        Grade ='D';
    }else if(percentage<60){
        Grade ='F';
    }
    printf("totalmarks:%f,percentage:%f\n,Grade:%c\n",totalmarks,percentage,Grade);
    return 0;
}