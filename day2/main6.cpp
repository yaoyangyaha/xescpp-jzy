//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;
int n,a[100010];
int more(){
    return max(a[n-1]-a[1],a[n]-a[2])-(n-2);
}
int lessn(){//记录长为N的区间中最多有多少个奶牛
    if(a[n-1]-a[1]==n-2 && a[n]-a[n-1]>2){
        return 2;
    }
    if(a[n]-a[2]==n-2 && a[2]-a[1x]>2){
        return 2;
    }
    int j=1;
    int ans=0;
    for(int i = 1;i<=n;i++){
        while(j<n&&a[j+1]-a[i]<=n-1){
            j++;
        }
        ans= max(ans,j-i+1);
    }
    return n-ans;
}
int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    cout << lessn() << endl <<more();
    return 0;
}