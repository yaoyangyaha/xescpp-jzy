//
// Created by 耀阳 on 2024/7/20.
//
#include<iostream>
#include<vector>

using namespace std;
struct node{
    int x,ct;
};
vector<node> v;
int tot;
int prime[30010],s[10010],num[30010];
bool p[30010];
int main(){
    memset(p,true,sizeof(p));
    for(int i = 2;i <= 30000;i ++){
        if(p[i]){
            ++tot;
            prime[tot]=i;
            for(int j=i*i;j<=30000;j+=i)p[j]=false;
        }
    }
    int n,m1,m2;
    cin >> n >> m1 >> m2;
    int ans=1e9;
    for(int i=1;i<=tot;i++){
        if(m1==1)break;
        if(m1%prime[i]==0){
            int x=0;
            while(m1%prime[i]==0){
                x++;
                m1/=prime[i];
            }
            v.push_back({i,x*m2});
        }
    }
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=1;i<=n;i++){
        // 对s[i]做质因数分解
        memset(num,0,sizeof(num));
        int maxx=0;
        for(int j=1;j<=tot;j++){
            if(s[i]==1)break;
            if(s[i]%prime[j]==0){
                int x=0;
                while(s[i]%prime[j]==0){
                    x++;
                    s[i]/=prime[j];
                }
                num[j]=x;
            }
        }
        bool flag=true;
        for(auto [p,c]:v){
            if(num[p]==0)flag=false;
            else{
                maxx=max(maxx,(c+num[p]-1)/num[p]);
            }
        }
        if(flag)ans=min(ans,maxx);
    }
    if(ans==1e9)cout<<-1;
    else cout << ans;
}