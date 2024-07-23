//
// Created by 耀阳 on 2024/7/20.
//
#include <bits/stdc++.h>
using namespace std;
int n1,n2,t;
string antlist_1,antlist_2;
int main(){
    cin >> n1 >> n2;
    getline(cin,"\n");
    getline(cin,antlist_1);
    getline(cin,"\n");
    getline(cin,antlist_2);
    cin>>t;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int dir[10010];
int main(){
    string s="";
    int n1,n2;
    cin >> n1 >>n2;
    string s1,s2;
    cin >> s1 >>s2;
    reverse(s1.begin(),s1.end());
    s=s1+s2;
    for(int i = 0;i<n1;i++){
        dir[i]=1;
    }for(int i=n1;i<n1+n2;i++){
        dir[i]=2;
    }
    int t;
    cin >> t;
    while(t--){
        bool vis[10010];
        memset(vis,false,sizeof(vis));
        for(int i =0;i<s.size()-1;i++){
            if(dir[i]==1&&dir[i+1]==2){
                vis[i]=true;
            }
        }
        for(int i = 0;i<s.size();i++){
            if(vis[i]){
                swap(s[i],s[i+1]);
                swap(dir[i],dir[i+1]);
            }
        }
    }
    cout << s;
    return 0;
}
 */