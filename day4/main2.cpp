
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
/*
int main(){
	string s;
	stack<int>s1;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(')s1.push(i);
		else{
			if(s1.empty()){
				cout << "NO";
				return 0;
			}else{
				s1.pop();
			}

		}
	}
	cout << "YES";
	return 0;
}
*/
int d[300],s[300],top;

int main(){
    freopen("bracket.in","r",stdin);
    freopen("bracket.out","w",stdout);
    d['<']=1;d['(']=2;d['[']=3;d['{']=4;
    d['>']=-1;d[')']=-2;d[']']=-3;d['}']=-4;
    int n;
    cin >> n;
    while(n--){
        top=0;
        string st;
        cin >> st;
        bool flag=true;
        for(int i=0;i<st.size();i++){
            if(d[st[i]]>0){
                if(s[top]<d[st[i]]&&top!=0){
                    flag=false;
                    break;
                }else{
                    s[++top]=d[st[i]];
                }
            }else{
                if(s[top]+d[st[i]]==0){
                    top--;
                }else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag==false||top!=0){
            cout << "NO"<<endl;
        }else{
            cout << "YES"<<endl;
        }
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
