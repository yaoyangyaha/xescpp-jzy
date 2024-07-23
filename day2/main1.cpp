//
// Created by 耀阳 on 2024/7/21.
//
#include <iostream>
using namespace std;
int n,m,ans;
int cnt(int a,int b){
    if(b==0||a==b) return 1;
    else return cnt(a-1,b)+cnt(a-1,b-1);
}
int main(){
    cin >> n >> m;
    ans = cnt(n,m);
    cout << ans;
    return 0;
}
/*
定义函数C，接收两个参数：整数n和整数m
    如果 m为0 或 n等于m
        返回1
    否则
        返回调用C(n-1, m)的结果加上调用C(n-1, m-1)的结果

程序开始
    声明两个整数变量n和m
    从标准输入读取n和m的值
    调用函数C，传入n和m作为参数，并输出结果
程序结束
*/
//==============================================
/*
#include <bits/stdc++.h>
using namespace std;
int C[100][100];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        C[i][0]=1;
        C[i][i]=1;
    }
    for(int i =2;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(j>i)continue;
            C[i][j]=C[i-1][j]+C[i-1][j-1];
        }
    }

    cout << C[n][m];
    return 0;
}
*/