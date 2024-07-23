//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;
int a[10010],n,m;
int sg[110];
int main(){
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for(int i =1;i<=m;i++){
		sg[i]=a[i];
	}
	int cnt=m+1;
	while(cnt<=n){
		int id=-1;
		int minn=1e9;
		for(int i =1;i<=m;i++){
			if(sg[i]<minn){
				minn=sg[i];
				id=i;
			}
		}
		sg[id]+=a[cnt];
		cnt++;
	}
	int maxx=0;
	for(int i =1;i<=m;i++){
		maxx=max(maxx,sg[i]);
	} 
	cout << maxx;
	return 0;
}