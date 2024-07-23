//
// Created by 耀阳 on 2024/7/21.
//
#include <iostream>
using namespace  std;
bool isPrime(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
//===================
bool p[100010];//true是质数，false不是
int prime[100010];//第几个质数是谁
int tot;
void primes(int n){
    memset(p,true,sizeof(p));
    for(int i = 2;i<=n;i++){
        if(p[i]){
            tot++;
            prime[tot]=i;
            for(int j=i*i;j<=n;j+=i)p[j]=false;
        }
    }
}