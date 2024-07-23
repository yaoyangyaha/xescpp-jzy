//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>

using namespace std;
int x,y,cnt;
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    cin >> x >>y;
    for(int p=x;p<=y;p++){
        if(x*y%p==0){
            int q= x*y/p;
            if(gcd(p,q)==x)cnt++;
        }
    }
    cout << cnt;
    return 0;
}