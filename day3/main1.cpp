//
// Created by 耀阳 on 2024/7/22.
//

#include <bits/stdc++.h>
using namespace std;
int n;
int a[10];
int vis[10];
void p(int x){
    if(x>n){
        for(int i = 1;i<=n;i++){
            cout << a[i]<<" ";
        }
        cout << endl;
        return;
    }
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
    p(1);
    return 0;
}