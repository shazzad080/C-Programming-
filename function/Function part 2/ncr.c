#include<stdio.h>

    int fact(int n){
        int f=1;
        for(int i=1;i<=n;i++){
            f*=i;
        }
        return f;
    }
    int ncr(int n,int r){
        return fact(n)/(fact(r)*fact(n-r));
    }
    int main(){
        int n,r,ans;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter r:");
        scanf("%d",&r);
        ans=ncr(n,r);
        printf("Ans is %d",ans);
    return 0;
}