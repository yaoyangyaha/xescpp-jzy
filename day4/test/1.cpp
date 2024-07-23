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