#include<iostream>
#include<queue>
using namespace std;
struct node{
    int x,y;
    int step;
}path[110][110];
int mp[110][110];
bool vis[110][110];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n;
void print(int x,int y){
    int px = path[x][y].x;
    int py = path[x][y].y;
    if(px==0&&py==0){
        printf("(%d,%d)",x,y);
        return;
    }
    print(px,py);
    printf("->(%d,%d)",x,y);
}
int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin >> mp[i][j];
        }
    }
    int sx,sy,ex,ey;
    cin >> sx >> sy >> ex >> ey;
    queue<node> q;
    q.push({sx,sy,0});
    vis[sx][sy]=1;
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        int step=q.front().step;
        q.pop();
        if(x==ex&&y==ey){
            cout << step << endl;
            print(ex,ey);
            return 0;
        }
        for(int i = 0;i<=3;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&!vis[xx][yy]&&!mp[xx][yy]){
                vis[xx][yy]=1;
                path[xx][yy]={x,y,0};
                q.push({xx,yy,step+1});
            }
        }
    }
}
