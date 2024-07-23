//
// Created by 耀阳 on 2024/7/22.
//

#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[15];
int vis[15];
void p(int x,int last){
    if(x>m){
        for(int i = 1;i<=m;i++){
            cout << a[i]<<" ";
        }
        cout << endl;
        return;
    }
    for(int i = last+1;i<=n;i++){
        if(vis[i]==0){
            a[x]=i;
            vis[i]=1;
            p(x+1,i);
            vis[i]=0;
        }
    }
}

int main(){
    cin >> n>>m;
    p(1,0);
    return 0;
}