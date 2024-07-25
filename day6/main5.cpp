#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[5010][5010],b[5010][5010];  //�൱�����޸ĵĲ������ 
int n,m,k;
void xg(int x1,int y1,int c){
    int x2=x1+k-1;
    int y2=y1+k-1;
    if(x2>n||y2>n){
        cout<<-1;
        exit(0); //����ֱ�ӽ�����������return0;
    }
    b[x1][y1]+=c;
    b[x1][y2+1]-=c;
    b[x2+1][y1]-=c;
    b[x2+1][y2+1]+=c;
}
signed main(){
    cin >> n>>m>>k;
    for(int i=1;i<=m;i++){
        int x,y,z;
        scanf("%lld%lld%lld",&x,&y,&z);
        a[x][y]=z;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            b[i][j]=b[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];   //��ǰ׺��
            int x=b[i][j]+a[i][j];
            if(x!=0){
                ans+=abs(x);
                xg(i,j,-x);
            }
        }
    }
    cout <<ans;
    return 0;
}
