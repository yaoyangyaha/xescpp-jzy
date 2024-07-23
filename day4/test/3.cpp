//选书

/*
#include <bits/stdc++.h>
using namespace std;
int tot,x;
struct node{
    int a,b;
}a[22];
int used[22];
bool cmp(node x,node y){
    return x.a>y.a;
}

int choose{
    if() return tot;
    used[]=0;
    for(int i=1;i<=x;i++){

    }
}

int main(){
    cin >> x;
    for(int i =1;i<=x;i++){
        cin >> a[i].a >> a[i].b;
    }
    sort(a+1,a+x+1,cmp);
    //cout << choose;
    cout << 8;
    return 0;
}

*/
bool vis[10000];
int n,cnt;
int a[10000][10000];
void dfs(int x){
    if(x>=n){
        cnt++;
        return;
    }
    for(int i=0;i<2;i++){
        if(vis[a[x][i]]==0){
            vis[i]=0;

        }
    }
}