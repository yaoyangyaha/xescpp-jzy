#include <bits/stdc++.h>
#define int long long
using namespace std;
int s[100010],top;
int mod=12345678910;
signed main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;
		if(x==0){
			top++;
			
		}else{
			if(s[top]==0){
				s[top-1]+1;
				s[top-1]=(s[top-1]+1)%mod;
				top--;
			}else{
				s[top-1]=(s[top-1]+2*s[top]%mod)%mod;
				s[top]=0;
				top--;
			}
		} 
	}
	cout << s[0];
	return 0;
}
