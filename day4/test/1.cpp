#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int n,m=0,a[2000][2000];
int main(){
    int x=0,y=0;
    //cin >> n;
    scanf("%d",&n);
    for(int i = 1;i <= n; i++){
        for(int j = i+1;j <= n;j++){
            int x=0;
            //cin >> x;
            scanf("%d",&x);
            a[i][j] = a[j][i] = x;
        }
    }
    for(int i=1;i<=n;i++){
        int l=0,r=0;
        for(int j=1;j<=n;j++){
            if(a[i][j]>r){
                l=r;
                r=a[i][j];
            }
            else if(a[i][j]>l){
                l=a[i][j];
            }
        }
        if(x<l){
            x=l;y=i;
        }
    }
    //cout <<1 <<endl << x;
    printf("1\n%d",x);
}