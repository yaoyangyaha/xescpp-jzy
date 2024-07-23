#include <bits/stdc++.h>
using namespace std;
long long a[100010],sum[100010];
int main(){
    long long n;
    cin >> n;
    for(int i =1;i<=n;i++){
        cin >> a[i];
    }
    long long mx=0;
    long long ans=0;
    for(int i =n;i>=1;i--){
        while(mx<a[i]){
            mx++;
            sum[mx]=sum[mx-1]+i;
        }
        ans+=sum[a[i]];
    }

    cout <<ans;
    return 0;
}
