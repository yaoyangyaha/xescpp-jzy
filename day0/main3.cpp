//
// Created by 耀阳 on 2024/7/19.
//
#include <iostream>
using namespace std;
string l,r;
int cnt;
int main()
{
    cin >> l>>r;
    l_long=l.length();
    r_long=r.length();
    while(1){
        for(int i = 0;i<l_long;i++){
            int tmp = l[i];
            if(tmp==2){
                cnt++;
            }
        }
        l[l_long]=l[l_long]+1;
    }
    return 0;
}