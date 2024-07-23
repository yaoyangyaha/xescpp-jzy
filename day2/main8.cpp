//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;
int score[100];
struct node{
    int id;
    int w;
    int zy;
}a[100];
bool cmp(node x,node y){
    return x.w>y.w;
}
bool cmp2(node x,node y){
    if(x.w==y.w) return x.zy>y.zy;
    else return x.w>y.w;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        int id;
        cin >> id;
        score[id]=n-i+1;
    }
    for(int i = 1;i<=n;i++){
        cin >> a[i].w;
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i =1;i<=n;i++){
        score[a[i].id]+=n-i+1;
        a[a[i].id].zy=n-i+1;
    }
    for(int i=1;i<=n;i++){
        a[i].w=score[i];
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp2);
    for(int i=1;i<=n;i++){
        printf("%d. Kod%02d (%d)\n",i,a[i].id,a[i].w);
    }
    return 0;
}