//
// Created by 耀阳 on 2024/7/22.
//
/*
#include <bits/stdc++.h>
using namespace std;

char a[1005], b[1005];

int arr[1005], brr[1005], ans[1005];
int main(){
    cin >> a >> b;

    int lena = strlen(a);
    int lenb = strlen(b);
    for(int i = 0; i < lena; i++) arr[i] = a[lena - i - 1] -'0';
    for(int i = 0; i < lenb; i++) brr[i] = b[lenb - i - 1] -'0';

    fill(ans, ans + lena + lenb + 1, 0);

    for(int i = 0; i < lena; i++){
        for(int j = 0; j < lenb; j++){
            ans[i + j] += arr[i] * brr[j];
            if(ans[i + j] > 9) {
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }
    }

    int len = lena + lenb;
    while(ans[len] == 0 && len > 0) len--;
    for(int i = len; i >= 0; i--) cout << ans[i];
    return 0;
}
*/
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