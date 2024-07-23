//
// Created by 耀阳 on 2024/7/20.
//

#include <iostream>
using namespace std;
string s[11],name;
int a[11];
int n;
int money,num;
int f(string name){
    for(int i=1;i<=n;i++){
        if(name==s[i]){
            return i;
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> s[i];
    }
    for(int i=1;i<=n;i++){
        cin >> name >> money >> num;
        a[f(name)]-=money;
        if(num==0) continue;
        a[f(name)]+=(money-money/num*num);
        for(int j=1;j<=num;j++){
            cin >> name;
            a[f(name)]+=money/num;
        }
    }
    for(int i=1;i<=n;i++){
        cout  << s[i] << " " << a[i] << endl;
    }
    return 0;
}
