#include<stdio.h>
int main(){
    int x;//percentage;
    printf("Enter Percentage :");
    scanf("%d",&x);
    //multiple conditions :
    /*if(x>=80 && x<=100) printf("Very Good");
    if(x>=60 && x<=79) printf("Good");
    if(x>=40 && x<=59) printf("Average");
    if(x<=39) printf("Fail");*/
    //nested rule :
    /*if(x>=80) printf("Very Good");
    else{//x<=79
    if(x>=60) printf("Good");
    else{//x<=59
    if(x>=40) printf("Average");
    else printf("Fail");//x<=39
    }
    }*/
    // else if rule:
    if(x>=80) printf("Very Good");
    else if(x>=60) printf("Good");
    else if(x>=40) printf("Average");
    else printf("Fail");
    return 0;
}