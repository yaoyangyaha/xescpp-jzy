#include <bits/stdc++.h>
#include <queue>
#include <cstdio>
using namespace std;
priority_queue <int,vector<int>,greater<int> >q;
int main()
{
    freopen("fruit.in","r",stdin);
    freopen("fruit.out","w",stdout);
    //作答区域
    int n;
    cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    while(q.size()>1){
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        ans+=(a+b);
        //cout << ans << endl;
        q.push(a+b);
    }
    cout << ans;

    fclose(stdin);
    fclose(stdout);
    return 0;
}