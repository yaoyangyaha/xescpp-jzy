//
// Created by 耀阳 on 2024/7/21.
//

#include <bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int score;
}a[5010];
bool cmp(node x,node y){
    if(x.score==y.score){
        return x.id<y.id;
    }else{
        return x.score>y.score;
    }
}
int main(){
    int n,m;
    cin >> n>>m;
    for(int i = 1;i<=n;i++){
        cin >> a[i].id >> a[i].score;
    }
    sort(a+1,a+n+1,cmp);
    int l = floor(1.5*m);
    cout <<a[l].score<<" ";
    int cnt=0;
    for(int i =1;i<=n;i++){
        if(a[i].score>=a[l].score){
            cnt++;
        }
    }
    cout << cnt<<endl;
    for(int i = 1;i<=cnt;i++){
        cout << a[i].id<<" "<<a[i].score<<endl;
    }

}