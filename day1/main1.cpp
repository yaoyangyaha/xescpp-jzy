//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>

using namespace std;
int num[16]={6,2,5,5,4,5,6,3,7,6};
int cnt,n;
int need(int x){
    int count=0;
    if(x==0)return num[0];
    while(x){
        count+=num[x%10];
        x/=10;
    }
    return count;
}

int main()
{
    cin >>n;
    n-=4;
    for(int a=0;a<=1111;a++){
        for(int b=0;b<=1111;b++){
            int c = a+b;
            if(need(a)+need(b)+need(c)==n){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}