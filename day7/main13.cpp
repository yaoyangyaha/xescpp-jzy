//
// Created by è€€é˜?on 2024/7/27.
//

#include <bits/stdc++.h>
using namespace std;
int n,m;
int mp[20020];
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
int vis[20000],vis2[20000];
struct node{
	int x,y,step;
};
int id(int i,int j){
	return (i-1)*m+j;
}
int main(){
	cin >> n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char ch;
			cin >>ch;
			if(ch=='X')mp[id(i,j)]=1;
		}
	}
	while(true){
		
		int jx,jy,hx,hy;
		cin >>jx>>jy>>hx>>hy;
		if(jx==0&&jy==0&&hx==0&&hy==0){
			break;
		}
		memset(vis,0,sizeof(vis));
		memset(vis2,0,sizeof(vis2));
		vis2[id(jx,jy)]=2;
		for(int i=0;i<8;i++){
			int xx=jx,yy=jy;
			while(true){
				if(xx<1||xx>n||yy<1||yy>m||mp[id(xx,yy)])break;
				vis2[id(xx,yy)]=2;
				xx+=dx[i];
				yy+=dy[i];
			}
		} 
		if(vis2[id(hx,hy)]){
			cout << 0<<endl;
			continue;
		}
		queue<node> q;	
		q.push({hx,hy,0});
		vis[id(hx,hy)]=1;
		bool flag=false;
		while(!q.empty()){
			int x=q.front().x;
			int y=q.front().y;
			int step=q.front().step;
			q.pop();
			if(vis2[id(x,y)]==2){
				flag=true;
				cout <<step<<endl;
				break;
			}
			for(int i=0;i<=3;i++){
				int xx=x+dx[i];
				int yy=y+dy[i];
				if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&!mp[id(xx,yy)]&&vis[id(xx,yy)]!=1){
					vis[id(xx,yy)]=1;
					q.push({xx,yy,step+1});
				}
			}
		} 
		if(!flag)cout <<"Poor Harry"<<endl;
	}
	return 0;
}
