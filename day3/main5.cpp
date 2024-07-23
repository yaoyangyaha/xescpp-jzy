//
// Created by 耀阳 on 2024/7/22.
//

//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace  std;
int cmp(string s1,string s2){
    if(s1.size()<s2.size()) return -1;
    if(s1.size()>s2.size()) return 1;
    if(s1<s2)return -1;
    if(s1>s2)return 1;
    if(s1==s2)return 0;
}
string sub(string s1,string s2){
    string s;
    int c=0;
    int tmp=s1.size()-s2.size();
    for(int i =s2.size()-1;i>=0;i--){
        if(s1[i+tmp]<s2[i]+c){
            s=char(s1[i+tmp]-s2[i]-c+10+'0')+s;
            c=1;
        }else{
            s=char(s1[i+tmp]-s2[i]-c+'0')+s;
            c=0;
        }
    }
    for(int i=tmp-1;i>=0;i--){
        if(s1[i]-c>='0'){
            s=char(s1[i]-c)+s;
            c=0;
        }else{
            s=char(s1[i]-c+10)+s;
            c=1;
        }
    }
    s.erase(0,s.find_first_not_of('0'));
    return s;
}
int main(){
    string s1,s2;
    cin >> s1>>s2;
    if(cmp(s1,s2)==-1){
        cout << "-";
        swap(s1,s2);
    }
    cout << sub(s1,s2);
    return 0;
}
