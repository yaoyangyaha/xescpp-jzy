//
// Created by 耀阳 on 2024/7/19.
//
#include <bits/stdc++.h>
using namespace std;
string N;
long long numlong;
bool flag=false;
int main()
{
    cin >> N;
    numlong= N.length();
    if(N[0]=='-'){

        cout << "-";
    }

    for(int i = numlong;i>=0;i--){
        if(N[i]=='-'){
            break;
        }
        if(N[i]==0&&flag==false){
            continue;
        }
        cout << N[i];
        flag= true;
    }
    return 0;
}