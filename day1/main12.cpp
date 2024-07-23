//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
using namespace std;
int a[10000000],maxx;
int main(){
    int n,m;
    cin >> n>>m;
    for(int i = 1;i<=m;i++){
        int x,y,z;
        cin >> x >> y >> z;
        a[x]+=z;
        a[y]-=z;
        if(x>y){
            a[1]+=z;
        }
    }
    int cnt=0;
    int maxx=0;
    for(int i = 1;i<=n;i++){
        cnt+=a[i];
        maxx=max(maxx,cnt);

    }
    cout << (maxx+35)/36;
    return 0;
}