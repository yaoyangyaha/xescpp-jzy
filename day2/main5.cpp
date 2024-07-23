//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;
struct node{
    int st,ed;
}a[200];
bool cmp(node x,node y){
    return x.ed<y.ed;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i].st >> a[i].ed;
    }
    sort(a+1,a+n+1,cmp);
    int cnt=0,line1=0,line2=0;
    for(int i = 1;i<=n;i++){
        if(line1>line2) swap(line1,line2);
        if(a[i].st>=line2){
            line2=a[i].ed;
            cnt++;
        }else if(a[i].st>=line1){
            line1=a[i].ed;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}