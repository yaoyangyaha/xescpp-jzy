#include <bits/stdc++.h>
using namespace std;
int n,m,minn=1e8,a[22],b[22],v[22],p[22],s[26],t[26],wt[105],ans=1e8,yx[105];

void dfs(int t,int sum){
    if(t>m){//Ã¿¸öÒôÏìÊÇ·ñ¿¼ÂÇ
        bool flag=true;
        for(int i=1;i<=100;i++){
            if(wt[i]>yx[i])flag=false;
        }
        if(flag)ans=min(ans,sum);
        return;
    }else{
        dfs(t+1,sum);
        for(int i=a[t];i<=b[t];i++){
            yx[i]+=v[t];
        }
        dfs(t+1,sum+p[t]);
        for(int i=a[t];i<=b[t];i++){
            yx[i]-=v[t];
        }
    }
    return;
}
int main(){
    cin >> n>>m;
    for(int i=1;i<=n;i++){
        int s,t,c;
        cin >> s >> t >>c;
        for(int j=s;j<=t;j++){
            wt[j]=c;
        }
    }
    for(int i=1;i<=m;i++){
        scanf("%d%d%d%d",&a[i],&b[i],&v[i],&p[i]);
    }
    dfs(1,0);
    cout <<ans;
    return 0;
}
