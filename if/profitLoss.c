#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter The selling price:");
    scanf("%d",&sp);
    if(sp>cp) printf("Profit is:%d",sp-cp);
        if(sp<cp) printf("Loss is:%d",cp-sp);
    
        if(sp=cp) printf("no profit no loss :%d",sp-cp);
    
return 0;
}
