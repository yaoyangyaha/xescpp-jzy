#include<iostream>
using namespace std;
int a[100010];
int main(){
	int n,m;
	cin >>n >>m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	while(m--){
		int x;
		cin >> x;
		int l=1,r=n;
		bool flag=false;
		while(l<=r){
			int mid=(l+r)/2;
			if(a[mid]==x){
				flag=true;
				cout << mid << " ";
				break;
			}
			if(a[mid]<x){
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
		if(!flag)cout << -1 <<" ";
	}
	return 0；
}
