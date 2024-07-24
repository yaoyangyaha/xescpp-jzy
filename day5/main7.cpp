#include <bits/stdc++.h>
using namespace std;
int a[100010],b[100010],d[100010];
typedef pair<int,int> pii;
priority_queue<pii,vector<pii>,greater<pii> > q;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]); 
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
		q.push(make_pair(b[i]+a[1],i));
		d[i]=1;
	}
	while(n--){
		//cout << q.top().first<<" ";
		printf("%d ",q.top().first);
		int i=q.top().second;q.pop();
		d[i]++;
		q.push(make_pair(b[i]+a[d[i]],i));
	}
	return 0;
} 
