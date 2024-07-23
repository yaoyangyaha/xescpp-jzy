//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
#include <cmath>
using namespace std;
long long n,m,a,b,x;
int main(){
    cin >> n >> m;
    for(int len=sqrt(2*m);len>=1;len--){
        if((2*m)%len!=0)continue;
        x=2*m/len;//x=a+b len=b-a+1
        a=(x-len+1);
        if(a%2!=0)continue;
        a /=2;
        if(a>n||x-a>n||a<=0)continue;
        cout<<"["<<a<<","<<x-a<<"]"<<endl;
    }
    return 0;
}
/*#define int long long
 *signed main
*/