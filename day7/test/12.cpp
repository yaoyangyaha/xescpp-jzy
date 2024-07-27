#include <bits/stdc++.h>
using namespace std;
int n,m,p[1010][1010];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
struct node{
    int x,y;
};
bool vis[1100][1100];
bool check(int mid){
    memset(vis,0,sizeof(vis));
    queue<node> q;
    q.push({1,1});
    vis[1][1]=true;
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        q.pop();
        if(x==n)return true;
        for(int i=0;i<=3;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&!vis[xx][yy]&&p[xx][yy]<=mid){
                vis[xx][yy]=1;
                q.push({xx,yy});
            }
        }
    }
    return 0;
}
int main(){
    scanf("%d%d",&n,&m);
    int l=1e9,r=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&p[i][j]);
            l=min(l,p[i][j]);
            r=max(r,p[i][j]);
        }
    }
    int ans;
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout <<ans;
    return 0;
}