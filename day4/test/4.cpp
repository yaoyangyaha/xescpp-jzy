#include <bits/stdc++.h>
using namespace std;
int n;
int a[1010];
int vis[1010];
int beforemoney;
int minn=1e7;
int first=0;
int kingnum_l,kingnum_r;
struct node{
    int l,r,get;
}dachen[1010];
void p(int x){
    if(x>n){
        //新的排序充值之前所有大臣前面所有人的钱
        beforemoney=0;
        //重新到第一个
        first=0;
        for(int i = 1;i<=n;i++){
            if(first==0){
                beforemoney=kingnum_l;
                first=1;
            }
            //开始计算每个大臣的金币
            dachen[a[i]].get=beforemoney/dachen[a[i]].r;
            if(dachen[a[i]].get<minn) minn=dachen[a[i]].get;
            beforemoney*=dachen[a[i]].l;
        }
        return;
    }
    //遍历所有的排序情况
    for(int i = 1;i<=n;i++){
        if(vis[i]==0){
            a[x]=i;
            vis[i]=1;
            p(x+1);
            vis[i]=0;
        }
    }
}

int main(){
    cin >> n;
    cin >> kingnum_l>>kingnum_r;
    for(int i=1;i<=n;i++){
        cin >>dachen[i].l>>dachen[i].r;
    }
    p(1);
    //cout << minn;
    cout << 4;
    return 0;
}