#include <bits/stdc++.h>
using namespace std;
int s[100],top;
int main(){
    string a;
    cin>> a;
    int num=0;
    int w=1;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='=')continue;
        if(a[i]>='0'&&a[i]<='9'){
            num+=(a[i]-'0')*w;
            w*=10;
        }else if(a[i]=='.'){
            s[++top]=num;
            num=0;w=1;
        }else{
            int x=s[top--];
            int y=s[top--];
            if(a[i]=='+'){
                s[++top]=x+y;

            }if(a[i]=='-'){
                s[++top]=x-y;
            }if(a[i]=='*'){
                s[++top]=x*y;
            }if(a[i]=='/'){
                s[++top]=x/y;
            }
        }
    }
    cout << s[top];

}