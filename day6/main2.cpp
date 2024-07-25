////二位前缀和 在二维数组上
//pre[i][j]=pre[i][j-1]-pre[i-1][j-1]+a[i][j];
// 
////二维数组区间查询从(x1,y1)到(x2,y2)的矩形范围内，数字和是多少
//pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1]; 
//
//4 4
//0 1 1 1
//1 1 1 0
//0 1 1 0
//1 1 0 1



//pre[i][j]=a[i][j]-a[i][j-1]-a[i-1][j]+a[i-1][j-1];

#include <iostream>
using namespace std;
int pre[150][150],a[140][140];
int main(){
    int n,m;
    cin >> n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            pre[i][j]=a[i][j]-a[i][j-1]-a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << pre[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
