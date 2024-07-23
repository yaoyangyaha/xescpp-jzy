#include <bits/stdc++.h>
using namespace std;
int n,d[10086],day,first=1;
bool finish[10086]={false},isfirst=true;
int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> d[i];
    }

    for(int i = 1;i<=n;i++){
        if(finish[i]==true&&i!=first){
            day++;
            continue;
        }
        d[i]--;
        if(d[i]==0){
            finish[i]=true;
            for(int j = 1;j<=i;j++){
                if(finish[j]==true){
                    break;
                    isfirst=false;
                }
            }
            if(isfirst==true){
                first =i;
            }

        }
        if(i==n){
            day++;
        }
    }
    cout <<day;

    return 0;
}