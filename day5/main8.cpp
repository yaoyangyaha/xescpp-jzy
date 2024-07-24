#include <bits/stdc++.h>
using namespace std;
map<int,int> p;//map�Ķ���
priority_queue<int,vector<int>,greater<int> >q[100010];
int a[100010];
int main(){
	int n;
	cin>> n;
	for(int i =1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int tot=0;
	for(int i=1;i<=n;i++){
		if(p[a[i]]==0)p[a[i]]= ++tot;
		int j=p[a[i]-1],k=p[a[i]];
		if(j==0||q[j].size()==0){
			q[k].push(1); 
		}else{
			int x=q[j].top();
			x++;   //��a[i]����ȥ������+1 
			q[k].push(x);//�����a[i]��β 
			q[j].pop();//������a[i]-1��β 
		}
	}
	int minn=1e9;
	for(int i=1;i<=tot;i++){
		if(!q[i].empty()) minn=min(minn,q[i].top());
	} 
	cout << minn;
	return 0;
} 
