#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y,step;
};
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1};
int mp[128][128],ans=0;
bool vis[128][128];
int main(){
	int  n,m,sx,sy;
	cin >> n >> m>>sx>>sy;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char ch;
			cin >>ch;
			if(ch=='*')mp[i][j]=1;
		}
	}
	queue<node> q;
	q.push({sx,sy,0});
	vis[sx][sy]=1;
	while(!q.empty()){
		int x=q.front().x;
		int y=q.front().y;
		int step=q.front().step;
		ans=max(ans,step);
		q.pop();
		for(int i=0;i<8;i++){
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&!vis[xx][yy]&&!mp[xx][yy]){
				vis[xx][yy]=1;
				q.push({xx,yy,step+1});
			}
		}
	}
	cout <<ans;
	return 0;

} 

