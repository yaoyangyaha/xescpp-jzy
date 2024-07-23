//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
using namespace std;
//if(abs(x-y)<1e-10) if(x==y)
/*
#include<bits/stdc++.h>
using namespace std;
int x[2000],y[2000];
double k[100010];
int tot=0;
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> x[i]>>y[i];
    }
    int cnt=0;
    int c=0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j)continue;
            int x1=x[i],x2=x[j],y1=y[i],y2=y[j];
            if(x1!=x2){
                double k1=1.0*(y1-y2)/(x1-x2);
                k=[++tot]=k1;
            }else c=1;
        }
    }
    sort(k+1;k+tot+1);
    for(int i = 1;i<=tot;i++){
        if(i==1||k[i]-k[i-1]>1e-10){
            cnt++;
        }
    }
    cout <<cnt+c;
    return 0;
}
