#include<bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[10010];
int n;
double f(double x,int i)
{
    return a[i]*x*x+b[i]*x+c[i];
}
double mf(double x)
{
    double maxx=f(x,1);
    for(int i=2;i<=n;i++)maxx = max(maxx,f(x,i));
    return maxx;
}
int main()
{
    int T;
    cin >>T;
    while(T--)
    {
        
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i] >> b[i] >> c[i];
            
        }
        double l=0,r=1000;
        while(r-l>1e-10)
        {
            double x1=l+(r-l)/3;
            double x2=r-(r-l)/3;
            if(mf(x1)>mf(x2))l=x1;
            else r=x2;
            
        }
        printf("%.4f\n",mf(l));
        
    }
}
