//
// Created by 耀阳 on 2024/7/22.
//
/*
#include <cstring>
#include <iostream>
using namespace std;
const int N = 205;
char a[N], b[N];
int aa[N], bb[N], ans[N];
int main(){
    cin >> a >> b;
    int len1 = strlen(a);
    int len2 = strlen(b);

    for(int i = 0; i < len1; i++) aa[i] = a[len1 - i - 1] - '0';
    for(int i = 0; i < len2; i++) bb[i] = b[len2 - i - 1] - '0';

    int len = max(len1, len2);
    int carry = 0;

    for(int i = 0; i < len; i++){
        ans[i] = aa[i] + bb[i] + carry;
        carry = ans[i] / 10;
        ans[i] %= 10;
    }
    if(carry > 0) ans[len] = carry;

    int i = len;
    while(i > 0 && ans[i] == 0) i--;
    for(; i >= 0; i--) cout << ans[i];
    return 0;
}
*/
//===================
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