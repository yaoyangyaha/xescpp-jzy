//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i = 1;i<=n/2;i++){
        int sum=i;
        int j = i+1;
        while(sum<n){
            sum=sum+j;
            j++;
        }
        if(sum==n){
            cout << i << " "<< j-1 << endl;
        }
    }
    return 0;
}