#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int val;
    int flag=0;
    int cnt1=0,cnt2=0;
    for(int i =0;i<s.size();i++){
        if(!flag){
            if(s[i]=='0')val=0;
            if(s[i]=='1')val=1;
            if(s[i]=='&'&&val==0){
                cnt1++;
                flag=1;
            }
            if(s[i]=='|'&&val==1){
                cnt2++;
                flag=2;
            }
        }else{
            if(s[i]=='('){
                int x=1;
                while(x!=0){
                    i++;
                    if(s[i]=='(')x++;
                    if(s[i]==')')x--;
                }
            }else if(flag==1&&s[i]=='|'){
                flag=0;
            }else if(s[i]==')'){
                flag=0;
            }else if(flag==1&&s[i]=='&'){
                cnt1++;
            }else if(flag==2&&s[i]=='|'){
                cnt2++;
            }
        }
    }
    cout << val << endl << cnt1<<" "<< cnt2<<endl;
    return 0;
}

