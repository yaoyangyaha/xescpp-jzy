#include <bits/stdc++.h> 
using namespace std;
int read()
{
	int x=0;
	char ch =getchar();
	while(ch<'0'||ch>'9') ch=getchar();
	while(ch>='0' && ch<='9')
	{
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x;
}
int main()
{
	int x;
	x=read();
	cout << x;
}
