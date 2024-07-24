#include <bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> >q;


int main(){
    int k ,m;
    cin >> k>>m;
    q.push(1);
    string s;
    for(int i = 1;i<=k;i++){
        int x=q.top();
        q.pop();

        s=s+to_string(x);

        q.push(2*x+1);
        q.push(4*x+5);
    }
    cout << s<<endl;
    int cnt=0;
    while(1){
        for(int i =0;i<s.size()-1;i++){
            if(s[i]<s[i+1]){
                cnt++;
                s.erase(i,1);   //�ַ���ɾ������
                if(cnt>=m){
                    cout << s;
                    return 0;
                }
                break;
            }
        }
    }
    return 0;
} 

