//
// Created by 耀阳 on 2024/7/23.
//
#include <bits/stdc++.h>
using namespace std;
string a;  //"3+2*(5+4-(2*3)"
int cur;   
int factor();
int term(){
	int res=factor();
	while(a[cur]=='*'||a[cur]=='/'){
		if(a[cur]=='*'){
			cur++;
			res*=factor();res%=10000;
		}else{
		 	cur++;
		 	res/=factor();
		}
	}
	return res;
}
int expr(){
	int res=term();
	while(a[cur]=='+'||a[cur]=='-'){
		if(a[cur]=='+'){
			cur++;
			res+=term();res%=10000;
		}else{
			cur++;
			res-=term();
		}
	}
	return res%10000;
}
int factor(){
	int res=0;
	if(a[cur]=='('){
		cur++;
		res=expr();
		cur++;
	}else{
		while(a[cur]>='0'&&a[cur]<='9'){
			res=res*10+a[cur]-'0'%10000;
			cur++;
		}
	}
	return res%10000;
}
int main(){
	cin >> a;
	cout << expr();
}
