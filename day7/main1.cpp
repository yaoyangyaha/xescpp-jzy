//
// Created by 耀阳 on 2024/7/26.
//
#include <bits/stdc++.h>
using namespace std;
int n,a[100010];


void  dfs(int n,int last,int num){
    if(n==0){
        cout <<n<<"=";
        for(int i=1;i<=num-1;i++){
            cout << a[i]<<"+";
        }
        cout <<endl;
    }else{
        for(int i=last;i>=1;i--){
            if(i>n) {
                continue;
            }
            a[num]=i;
            dfs(n-i,i,num+1);
        }
    }
}

int main(){

    cin >>n;
    dfs(n,0,0);

    return 0;
}
