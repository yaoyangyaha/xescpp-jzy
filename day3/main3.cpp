//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;
int n;
int a[20];
bool vis[20];
int cnt;
bool isprime(int n){
    if (n < 2 ){
        return false;
    }
    else{
        for(int i =2 ;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

void dfs(int pos){
    if(pos ==n+1 && isprime(a[1]+ a[n])){
        cnt++;
        for(int i=1;i<=n; i++)
        {
            cout << a[i]<<" ";
        }
        cout<< endl;
        return;
    }else{
        for(int i=1;i<=n; i++){
            if(vis[i]== 0){
                if(pos ==1|| isprime(i + a[pos-1])){
                    a[pos]= i;
                    vis[i]= 1;
                    dfs(pos + 1);
                    vis[i]= 0;
                }
            }
        }
    }
}


int main(){
    cin>>n;
    dfs(1);
    cout << cnt;
    return 0;
}
//========================
#include <iostream>
using namespace std;
int a[20],n,vis[20],cnt;
bool isPrime(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void f(int x,int last){
    if(x>n){
        if(isprime(a[n]+a[1])){
            for(int i =1;i<=n;i++)cout << a[i]<<" ";
            cout <<endl;
            cnt++;
        }
        return;
    }
    for(int i = 1;i<=n;i++){
        if(vis[i]==0){
            if(isprime(i+last)||x==1){
                a[x]=i;
                vis[i]=1;
                f(x+1,i);
                vis[i]=0;
            }
        }
    }
}
main(){
    cin >> n;
    f(1,0);
    cout <<cnt;
}