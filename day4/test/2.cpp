/*
#include <bits/stdc++.h>
using namespace std;

string add(string s1,string s2){
    string s;
    int l1=s1.size(),l2=s2.size();
    for(int i = 1;i<=l2-l1;i++)s1="0"+s1;
    for(int i = 1;i<=l1-l2;i++)s2="0"+s2;
    l1=s1.size();
    int c=0;
    for(int i=s1.size()-1;i>=0;i--){
        int t=s1[i]-'0'+s2[i]-'0'+c;
        c=t/10;
        t %= 10;
        s=char(t+'0')+s;
    }
    if(c)s=char(c+'0')+s;
    return s;
}
string mul(string s1,string s2){
    string s="";
    int l1=s1.size(),l2=s2.size();
    string temp;
    for(int i = l2-1;i>=0;i--){
        temp="";
        int t=s2[i]-'0';
        int c=0;
        if(t!=0){
            for(int j=1;j<=l2-1-i;j++){
                temp+="0";
            }
            for(int j = l1-1;j>=0;j--){
                int x=(t*(s1[j]-'0')+c)%10;
                c=(t*(s1[j]-'0')+c)/10;
                temp=char(x+'0')+temp;
            }
            if(c!=0) temp=char(c+'0')+temp;
        }
        s=add(s,temp);
    }
    s.erase(0,s.find_first_not_of('0'));
    return s;
}
long long n,k;

int main(){
    cin >> n >> k;
    cout << 01;
    return 0;
}

 */

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
//long long不够用
unsigned long long k,bk;
int n;
bool flag;
int main(){
	cin>>n>>k;
	bk=1ull<<(n-1);//从0开始编号则n-1
	while(bk){ //直到长度为0
		if(!flag){
			if(k < bk) cout<<"0";//此处省略一个flag=false;
			else if(k >= bk) {
				cout<<"1";
				k -= bk;//为下一阶段判断k的位置做准备
				flag = true;//k在后半段下一阶段为10顺序

			}
		}
		else if(flag){
		   if(k < bk){
		    	cout<<"1";
		    	flag = false;//若k在前半段，使下一阶段为01顺序
			}
			else if(k >= bk) { //如果k大于bk则在后半段
				cout<<"0";
				k -= bk;//为下一阶段判断k的位置做准备
                                        //此处省略一个flag=true;
			}
		}
		bk >>= 1;//每次去掉一半，k在前半段则去掉后半段长度，在后半段则去掉前半段长度
	}
	return 0;
}
