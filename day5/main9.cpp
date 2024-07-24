#include <bits/stdc++.h>
using namespace std;
int b[1024];
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int s,t,c;
		cin >> s >> t >> c;
		//a[s]....a[t]  +c
		b[s]+=c; //b[s]=a[s]-a[s-1]
		b[t+1]-=c;//b[t+1]=a[t+1]-a[t]
	}
	int pre=0;
	int ans=0;
	for(int i=1;i<=1001;i++){
		pre=pre+b[i];
		ans=max(ans,pre);
	}
	cout << ans;
	return 0;
}
