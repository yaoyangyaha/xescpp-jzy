//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
using namespace std;
int num[1024][3];
int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 1;i<=n;i++){
        int x;
        cin >>x;
        int y = x%k;
        if(x>num[y][0]){
            num[y][2]=num[y][1];
            num[y][1]=num[y][0];
            num[y][0]=x;
        }else if(x>num[y][1]){
            num[y][2]=num[y][1];
            num[y][1]=x;
        }else if(x>num[y][2]){
            num[y][2]=x;
        }
    }
    int ans=0;
    for(int sum=0;sum<=2*k;sum+=k){
        for(int a=0;a<k;a++){
            for(int b=0;b<k;b++){
                int c=sum-a-b;
                if(c<0||c>=k) continue;
                int tmp=num[a][0]+num[b][a==b]+num[c][(a==c)+(b==c)];
                ans=max(ans,tmp);
            }
        }
    }
    cout << ans;
    return 0;
}