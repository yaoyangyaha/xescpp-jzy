//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
#include <string>
using namespace std;
int a[1010],b[1010],cnt =0;
string x,y,z;
int main(){
    cin >> x >> y >> z;
    for(int i = 0;i<x.size();i++){
        if(b[x[i]-'A']==0&&a[y[i]-'A']==0){
            b[x[i]-'A']=y[i]-'A';
            a[y[i]-'A']=x[i]-'A';
            cnt++;
        }else if(b[x[i]-'A']!=y[i]-'A'||a[y[i]-'A']!=x[i]-'A'){
            cout <<"Failed";
            return 0;
        }
    }
    if(cnt!=26){
        cout << "Failed";
        return 0;
    }
    for(int i =0;i<z.size();i++){
        cout << char('A'+b[z[i]-'A']);
    }
    return 0;
}