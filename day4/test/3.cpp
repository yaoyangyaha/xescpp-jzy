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
#include<iostream>
using namespace std;
int a[100][3];
bool vis[100];
int n;
int cnt;
void dfs(int x){
    if(x>n){
        cnt++;
        return;
    }
    for(int i=0;i<2;i++){
        if(vis[a[x][i]]==0){
            vis[a[x][i]]=1;
            dfs(x+1);
            vis[a[x][i]]=0;
        }
    }

}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++)cin>>a[i][0]>>a[i][1];
    dfs(1);
    cout << cnt;
}

/*
1
1        2
1   2    1    2
1 2 1 2  1 2  1 2
*/
