//
// Created by 耀阳 on 2024/7/26.
//阅读程序
#include <bits/stdc++.h>
using namespace  std;
int main(){
    unsigned int n,k;
    cin >> n>>k;
    int cnt=0;
    while(n){
        n&=n-1;  //x-1会把x中最后一位1变成0，并且在之后补零，将x中二进制最后一个1变成0
        cnt++;
    }
    for(int i=0;i<32;i++){
        if(!(k&(1<<i))){//判断数字k的二进制中第i+1位是不是1    取反表示有多少个零
            cnt++;
        }

    }
    cout <<cnt;
    return 0;
}