#include <stdio.h>
#define fo(i,k,n) for(int i=(k)?k:0;i<n;i++)
#define fore(i,k,n) for(int i=n;i>=k;i--)

#define nn'\n'
#define MAX 100
int grid[MAX][MAX];
int visited[MAX][MAX];
int count[MAX];
void backtrack(int x,int y,int l,int c){
if(x<0||y<0||x>=l||y>=c||visited[x][y]||grid[x][y]==0)
return;
else{
visited[x][y]=1;
count[grid[x][y]]++;
backtrack(x+1,y,l,c);
backtrack(x-1,y,l,c);
backtrack(x,y+1,l,c);
backtrack(x,y-1,l,c);
}
}
void solve(){
int n,l,c;
scanf("%d %d %d",&n,&l,&c);
fo(i,0,l){
fo(j,0,c){
scanf("%d",&grid[i][j]);
visited[i][j]=0;
}
}
fo(i,0,MAX){
count[i]=0;
}
fo(i,0,l){
fo(j,0,c){
if(grid[i][j]!=0&&!visited[i][j]){
backtrack(i,j,l,c);
}
}
}
fore(i,0,MAX-1){
if(count[i]!=0){
printf("%d %d\n",i,count[i]);
break;
}
}
}
int main(){
solve();
return 0;
}