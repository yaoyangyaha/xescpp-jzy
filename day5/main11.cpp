#include<bits/stdc++.h>
using namespace std;
int sum[100010][2];
int cnt[100010][2];
int num[100010],c[1000010];
int mod=10007;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i<=n;i++){
		scanf("%d",&num[i]);
	} 
	for(int i = 1;i<=n;i++){
		scanf("%d",&c[i]);
		cnt[c[i]][i%2]++;
		sum[c[i]][i%2]=(sum[c[i]][i%2]+num[i])%mod;
	}
	int ans=0;
	for(int i = 1;i<=n;i++){
		int k=cnt[c[i]][i%2];
		int tmp=i%mod*(sum[c[i]][i%2]+(k-2)*num[i]%mod)%mod;
		ans=(ans+tmp)%mod;
	}
	cout << ans;
}
