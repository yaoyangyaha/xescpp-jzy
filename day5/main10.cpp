#include <iostream>
using namespace std;
int a[110][110],pre[110][110];
int main()
{
    int n,m,t;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> a[i][j];
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
        }
    }
    cin >> t;
    while(t--){
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        int ans=pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1];
        cout << ans << '\n';
    }
	return 0;
}
