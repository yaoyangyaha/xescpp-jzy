#include <bits/stdc++.h>
using namespace std;
string a;
int cur;
int factor();
int chengchu(){
    int res=factor();
    while(a[cur]=='*'||a[cur]=='/'){
        if(a[cur]=='*'){
            cur++;
            res*=factor();
        }else{
            cur++;
            res/=factor();
        }
    }
    return res;
}
int expr(){
    int res=chengchu();
    while(a[cur]=='+'||a[cur]=='-'){
        if(a[cur]=='+'){
            cur++;
            res+=chengchu();
        }else{

            cur++;
            res-=chengchu();
        }
    }
    return res;
}
int factor(){
    int res=0;
    while(a[cur]>='0'&&a[cur]<='9'){
        res=res * 10 + a[cur] - '0';
        cur++;
    }

    return res;
}

int main(){
    cin >> a;
    cout << expr();
    return 0;
}
