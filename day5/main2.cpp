#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int q[2000],n,m,head,tail;
int main(){
	freopen("tran.in","r",stdin);
	freopen("tran.out","w",stdout);
	
	head=tail=1;
	int ans=0;
	cin >> m >> n;
	
	for(int i =1;i<=n;i++){
		int x;
		cin>>x;
		bool flag=false;
		for(int j=head;j<tail;j++){
			if(q[j]==x) flag=true;
			
		}
		if(flag){
			continue;
		}else{
			ans++;
			if(tail-head==m){
				head++;
			}
			q[tail++]=x;
		}
	}
	
	cout <<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
