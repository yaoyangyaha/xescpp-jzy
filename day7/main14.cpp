#include <bits/stdc++.h>
using namespace std;
int c[100][100];
int n,sum,ans[100],yh[100],a[100];
bool vis[100];
void dfs(int k,int s){//深搜
    if(s>sum)return;
	if(k>n){
        if(s==sum){
            for(int i=1;i<=n;i++){
                cout << a[i]<<" ";
            }
            exit(0);
        }
        return;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==false) {
            a[k] = i;
            vis[i] = true;
        }
        vis[i]=false;
    }

}
int main(){
	cin >> n>>sum;
	//构建杨辉三角
    c[1][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            c[i][j]=c[i-1][j-1]+c[i-1][j+1];
        }
    }

    //调用深搜
    dfs(n,sum);
	return 0;
}
