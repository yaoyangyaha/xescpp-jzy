#include <bits/stdc++.h>
using namespace  std;
const int maxn=100010;
int a[maxn],b[maxn],c[maxn];
int id[maxn],t1[maxn],t2[maxn];
bool vis[maxn];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        id[a[i]]=i;
    }
    for(int i =1;i<=n;i++){
        scanf("%d",&b[i]);
        t1[b[i]]++;
    }
    for(int i =1;i<=n;i++){
        scanf("%d",&c[i]);
        t2[c[i]]++;
    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(t1[i]==0||t2[i]==0)q.push(i);
    }
    int ans=0;
    //后面的代码
    while(!q.empty()){
        int cr=q.front();q.pop();
        int i=id[cr];
        if(vis[i])continue;
        vis[i]=1;
        t1[b[i]]--;
        t2[c[i]]--;
        if(t1[b[i]]==0)q.push(b[i]);
        if(t2[c[i]]==0)q.push(c[i]);
        ans++;
    }
    cout <<ans;
}






