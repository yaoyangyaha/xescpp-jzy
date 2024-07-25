#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("root.in","r",stdin);
    freopen("root.out","w",stdout);
    double x;cin >> x;
    double l=0,r=10;
    while(r-l>0.000001)
    {
        double mid=(l+r)/2;
        double t=mid*mid*mid*mid*mid;
        if(t<x)l=mid;else r=mid;
    }
    cout << l;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
