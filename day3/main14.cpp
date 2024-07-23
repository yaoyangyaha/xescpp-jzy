#include <bits/stdc++.h>
using namespace std;
int t[10010],d[10010];
int ct,cd;
int main(){
    int n;
    cin >>n;
    for(int i =1;i<=n;i++){
        char c;
        cin >> c;
        if(c=='T') cin >> t[++ct];
        else cin >> d[++cd];
    }
    sort(t+1,t+ct+1);
    sort(d+1,d+cd+1);
    t[ct+1]=1e8;
    d[cd+1]=1e8;
    int i=1,j=1,v=1;
    double s=0,now=0;
    while(i<=ct||j<=cd){
        double v1=1.0/v;
        double st= s+v1*(t[i]-now);
        double sd=d[j];
        if(st<sd){
            s=st;
            now=t[i];
            v++;i++;
        }else{
            now+=(sd-s)/v1;
            s=sd;
            v++;j++;
        }
    }
    double v1=1.0/v;
    now+=(1000-s)/v1;
    cout << int(now+0.5);
    return 0;
}
