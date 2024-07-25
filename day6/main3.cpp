#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100010],b[100010];
signed main()
{
    int n;
    cin >> n;
    int fs=0,zs=0;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        b[i]=a[i]-a[i-1];
        if(i>=2)
        {
            if(b[i]>0)zs+=b[i];
            else fs +=abs(b[i]);
        }
    }
    cout << max(zs,fs)<<"\n";
    cout << abs(zs-fs)+1;
}
