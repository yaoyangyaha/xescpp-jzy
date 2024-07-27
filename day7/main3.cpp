#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int n,m;
int frog(int x,int y){
    if(x==0)return y+1;
    else return 2*frog(x-1,y);
}

int main(){
    freopen("frog.in","r",stdin);
    freopen("frog.out","w",stdout);
    cin >> n>> m;
    cout << frog(n,m);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
