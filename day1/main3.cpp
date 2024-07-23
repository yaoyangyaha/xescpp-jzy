//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
#include <cmath>

using namespace std;
int n,a[1500009];

int main(){
    scanf("%d",&n);
    while(n--){
        int x;
        scanf("%d",&x);
        x--;
        x*=2;
        int y = sqrt(x);
        if(y*(y+1)==x){
            cout << 1<<endl;
        }else{
            cout << 0<<endl;
        }
    }
    return 0;
}