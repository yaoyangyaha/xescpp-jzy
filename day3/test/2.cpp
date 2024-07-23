//
// Created by 耀阳 on 2024/7/22.
//

#include <bits/stdc++.h>
using namespace std;
int n,m,p;
long long ans=0;
struct node{
    int p,c;
}s[100001];
bool cmp(node x,node y)//结构体排序
{
    return x.p<y.p;
}
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> s[i].p>>s[i].c;
    }

    sort(s+1,s+n+1,cmp);//从小到大排序传感器位置

    for(int i=1;i<=n;i++){
        if(s[i].c>p){
            ans+=(s[i].c-p);
        }
        p=s[i].c;
    }
    cout << ans;
    return 0;
}