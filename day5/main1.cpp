#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct node{
    int t,x;
};

queue<node>q;
int a[100010];
int cnt;
int main() {
    int n;
    cin >> n;
    for(int i =1;i<=n;i++){
        int t,k;
        cin >> t >> k;
        for(int j=1;j<=k;j++){
            int c;
            cin >> c;
            a[c]++;
            if(a[c]==1)cnt++;
            q.push({t+86400,c});
        }
        while(!q.empty()){
            node cur=q.front();
            if(cur.t<=t){
                q.pop();
                a[cur.x]--;
                if(a[cur.x]==0)cnt--;
            }else{
                break;
            }

        }
        cout << cnt <<endl;
    }
}
