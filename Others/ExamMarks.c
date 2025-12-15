#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks(0-100) :");
    scanf("%d",&marks);
    if(marks<30){
    printf("Grade is C\n");
    }
    else if(marks>=30 && marks<70){
        printf("Grade is B\n");
    }
    else if(marks>=70 && marks<90){
        printf("Grade is A");
    }
    else{
        printf("Grade is A+");
    }
    return 0;
}