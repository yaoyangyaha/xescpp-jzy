#include <cstdio>

//
// Created by 耀阳 on 2024/7/22.
//
//printf实现0占位
printf("%02d")//%0补零 2表示两位
//快速读入
int read(){
    int x=0;
    char ch=getchar();
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch>='0'&&ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x;
}
cin >> n >> q; ==> n=read();q=read();
//重载小于符
struct node{
    int id;
    int w;
    !>bool operator <(const node& x)const{
    !>    if(w!=x.w) return w<x.w;
    !>    else return id<x.id;
    !>}
}a[8192];
//重载小于符，类似于cmp
bool cmp(node x,node y){
    if(x.w!=y.w) return x.w<y.w;
    else  return x.id<y.id;
}
//递归
int f(int n){
    if(n==1) return 1;
    return n * f(n-1);//不能 return f(n-1)/(n-1)要朝着递归边界自调用
}
int f(int x){
    //1.先写递归边界
    //2.朝着递归边界自调用
}
//斐波那契数列1 1 2 3 5 8 13 21 34
int fibo(int n){
    if(n==1||n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
//===高精度加法========
//1.补0
//2.从个位开始列竖式计算
//3.最后的进位补充到高位
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
int main(){
    string s1,s2;
    cin >> s1 >>s2;
    add(s1,s2);
    cout << add(s1,s2);
    return 0;
}
//======高精度乘高精度========
#include <bits/stdc++.h>
using namespace  std;
int cmp(string s1,string s2){
    if(s1.size()<s2.size()) return -1;
    if(s1.size()>s2.size()) return 1;
    if(s1<s2)return -1;
    if(s1>s2)return 1;
    if(s1==s2)return 0;
}
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
int main(){
    string s1,s2;
    cin >> s1 >>s2;
    cout << mul(s1,s2);
    return 0;
}
