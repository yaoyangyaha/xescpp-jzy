//
// Created by 耀阳 on 2024/7/21.
//
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int a[30010];
int main(){
    freopen("gift.in","r",stdin);
    freopen("gift.out","w",stdout);

    int w,n;
    cin >> w >> n;
    for(int i =1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    int l=1;int r=n;int cnt=0;
    while(l<=r){
        if(l==r){
            cnt++;
            break;
        }
        if(a[l]+a[r]<=w){
            l++;
            r--;
            cnt++;
        }else{
            r--;
            cnt++;
        }
    }
    cout <<cnt;

    fclose(stdin);
    fclose(stdout);
    return 0;
}