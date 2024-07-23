//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int w;
    bool operator <(const node& x)const{
        if(w!=x.w) return w<x.w;
        else return id<x.id;
    }
}a[8192];
int num[8192];
bool cmp(node x,node y){
    if(x.w!=y.w) return x.w<y.w;
    else  return x.id<y.id;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    cin >>n>>q;
    for(int i=1;i<=n;i++){
        cin >> a[i].w;
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        num[a[i].id]=i;
    }
    while(q--){
        int op,x,y;
        cin >> op >> x;
        if(op==1){
            cin >> y;
            int tmp=num[x];//num[x]表示原本在数组中的第n个位置
            a[tmp].w=y;//排序后在第几个位置
            for(int i=tmp-1;i>=1;i--){
                if(a[i].w>y ||(a[i].w==y&&a[i].id>x)){
                    swap(num[a[i].id],num[x]);
                    swap(a[i],a[tmp]);

                    tmp=num[x];
                }else break;
            }
            for(int i=tmp+1;i<=n;i++){
                if(a[i].w<y ||(a[i].w==y&&a[i].id<x)){
                    swap(num[a[i].id],num[x]);
                    swap(a[i],a[tmp]);
                    tmp=num[x];
                }else break;
            }
        }else{
            cout << num[x]<<endl;
        }
    }
    return 0;
}