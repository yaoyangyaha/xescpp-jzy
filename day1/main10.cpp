//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
using namespace std;
int n1,m1,n2,m2,k;
int sum[2];
int w;
int main(){
    cin >> n1 >> m1 >>n2>>m2>>k;
    for(int i = 1;i<=n1;i++){
        for(int j = 1;j<=m1;j++){
            int x;
            cin>> x;
            if(x!=999999){
                sum[(i+j)%2]+=(x-k);

            }else{
                
                w=(i+j)%2;
            }
        }
    }
    for(int i=n1+1;i<=n1+n2;i++){
        for(int j = 1;j<=m2;j++){
            int x;
            cin >> x;
            if(x!=999999){
                sum[(i+j)%2]+=(x-k);
            }else{
                w=(i+j)%2;
            }
        }
    }
    //未知数字发生的改变+sum[w]=sum[1-w]
    cout << sum[1-w]-sum[w]+k;
    return 0;
}