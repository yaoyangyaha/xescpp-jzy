#include <iostream>
#include <string>
using namespace std;
string s,d;
int num[20010];
bool huiwen(int x,int y){
    if(y>=d.size())return false;
    for(int i = x;i<=y;i++){
        if(d[i]!=d[y-i+x]){
            return false;
        }
    }
    return true;
}
int main(){
    string ss;

    while(getline(cin,ss)){
        s+=ss;
        s+="\n";
    }

    int id=0;
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            d+=s[i];
            num[id]=i;
            id++;
        }else if(s[i]>='A'&&s[i]<='Z'){
            d+=(s[i]+32);
            num[id]=i;
            id++;
        }
    }
    int mx=0,st,e;
    for(int i = 0;i<d.size();i++){
        for(int j=mx+1;j<2005;j++){
            int ed=i+j-1;
            if(huiwen(i,ed)){
                mx=j;
                st=i;e=ed;
            }
        }
    }
    cout << mx<<endl;
    for(int i = num[st];i<=num[e];i++){
        cout << s[i];
    }
}