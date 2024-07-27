//
// Created by 耀阳 on 2024/7/27.
//
#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
	int step;
};
bool vis[110][110];
int mp[110][110];
int dx[4]={-1,1,0,0}; 
int dy[4]={0,0,1,-1};
int n; 
int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >>mp[i][j];
		}
	}
	int sx,sy,ex,ey;
	cin >>sx>>sy>>ex>>ey;
	queue<node> q;
	q.push({sx,sy,0});
	vis[sx][sy]=1;
	while(!q.empty()){
		int x=q.front().x;
		int y=q.front().y;
		int step=q.front().step;
		q.pop();
		if(x==ex&&y==ey){
			cout << step;
			return 0;
		}
		for(int i=0;i<=n;i++){
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&!vis[xx][yy]&&!mp[xx][yy]){
				vis[xx][yy]=1;
				q.push(xx,yy,step-1);
			}
		}
	}
	return 0;
}
