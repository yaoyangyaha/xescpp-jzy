//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;

struct node{
	int w,s;
}a[50010];
bool cmp(node x,node y){
	return x.w+x.s<y.w+y.s;
} 

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].w>>a[i].s;
	}
	sort(a+1,a+n+1,cmp);
	int sum=0;
	int ans=-1e9;
	for(int i =1;i<=n;i++){
		ans=max(ans,sum-a[i].s);
		sum+=a[i].w;
	}
	cout << ans;
	
	return 0;	
}
