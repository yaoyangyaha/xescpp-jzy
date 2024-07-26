#include <bits/stdc++.h>
using namespace std;
const int n=9;
const int id[10][10]={//每日快乐打表 
        {},
        {0,1,1,1,2,2,2,3,3,3},
        {0,1,1,1,2,2,2,3,3,3},
        {0,1,1,1,2,2,2,3,3,3},
        {0,4,4,4,5,5,5,6,6,6},
        {0,4,4,4,5,5,5,6,6,6},
        {0,4,4,4,5,5,5,6,6,6},
        {0,7,7,7,8,8,8,9,9,9},
        {0,7,7,7,8,8,8,9,9,9},
        {0,7,7,7,8,8,8,9,9,9},
};
int shudu[11][11];
bool h[10][10],l[10][10],g[10][10];
void dfs(int x,int y){//要去填(i,j)
    if(y>9){
        x++;
        y=1;
    }
    if(x>9){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << shudu[i][j]<<" ";
            }
            cout <<endl;
        }
        exit(0);
    }
    if(shudu[x][y]){//如果不为零
        dfs(x,y+1);
    }else{
        for(int i=1;i<=n;i++){
            if(h[x][i]||l[y][i]||g[id[x][y]][i])continue;
            shudu[x][y]=i;
            h[x][i]=l[y][i]=g[id[x][y]][i]=true;
            dfs(x,y+1);
            h[x][i]=l[y][i]=g[id[x][y]][i]=false;
            shudu[x][y]=0;

        }
    }

}

int main(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> shudu[i][j];
            if(shudu[i][j]==0){
                continue;
            }else{
                h[i][shudu[i][j]]=true;
                l[j][shudu[i][j]]=true;
                g[id[i][j]][shudu[i][j]]=true;
            }
        }
    }
    dfs(1,1);//一定要调用！！！
    return 0;
}
