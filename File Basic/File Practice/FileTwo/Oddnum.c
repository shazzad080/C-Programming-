#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("sshazazadAhmed.txt","w");
int n;
printf("Enter Number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2!=0){
        fprintf(fptr,"%d ",i);
    }
}

    fclose(fptr);
    return 0;
}