#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
}a[500010];
bool cmp(node a,node b){
	if(a.y==b.y) return a.x>b.x;
	return a.y>b.y; 
} 
int main(){
	int n;
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i].x >> a[i].y;
	}
	sort(a+1,a+n+1,cmp);
	int maxx=-1;
	int last=-1;
	int f=1;
	for(int i =1;i<=n;i++){
		if(a[i].x>maxx){
			maxx=a[i].x;
			if(f==1){
				f=0;
			}else{
				cout << ",";
			}
			printf("(%d,%d)",a[i].x,a[i].y);
		}
	}
	return 0;
}
