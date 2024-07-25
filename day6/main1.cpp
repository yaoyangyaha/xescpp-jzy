#include <iostream>
using namespace std;
int pre[150][150],a[140][140];
int main(){
    int n,m;
    cin >> n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+a[i][j];
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