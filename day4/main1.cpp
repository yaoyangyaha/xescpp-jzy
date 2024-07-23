#Include <bits/stdc++.h>
using namespace std;
int s[1024],top;
int main(){
	int n;
	cin >> n;
	int num=0;
	for(int i =1;i<=n;i++){
		int m;
		cin >>m;
		while(m>=num){
			s[++top]=num;
			num++;
		}
		if(s[top]==m)top--;
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
} 
