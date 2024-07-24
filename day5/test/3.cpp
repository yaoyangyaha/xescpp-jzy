#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005],d[100005];
int k,g,f,m,q;
double tbh;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    cin>>k>>g>>f>>m;
    for(int i=1;i<=k;i++) cin>>a[i];
    for(int i=1;i<=g;i++) cin>>b[i];
    for(int i=1;i<=f;i++)
        cin>>c[i];
    for(int i=1;i<=m;i++)
        cin>>d[i];
    sort(a+1,a+k+1,cmp);
    sort(b+1,b+g+1,cmp);
`    sort(c+1,c+f+1,cmp);
    sort(d+1,d+m+1,cmp);
    cin>>q;
    int l,z,y;
    int x=1,r=1,w=1,h=1;
    int sss;
    while(q--){
        cin>>l>>z>>y;
        tbh=0;
        tbh+=a[x];
        x++;
        for(int i=r;i<r+l;i++)  tbh+=b[i];
        r+=l;
        for(int i=w;i<w+z;i++) tbh+=c[i];
        w+=z;
        for(int i=h;i<h+y;i++)  tbh+=d[i];
        h+=y;
        printf("%.2f\n",tbh/11);
    }
    return 0;
}