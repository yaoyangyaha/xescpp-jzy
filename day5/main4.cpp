#include <bits/stdc++.h>
using namespace std;
struct node{
    int p,t,used;
}q[100010];
int head,tail;
int main(){
    head=tail=1;
    int n;
    cin>> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int type,p,t;
        cin >> type>>p>>t;
        if(type==0){
            ans+=p;
            q[tail++]={p,t+45,0};
        }else{
            while(head<tail&&q[head].t<t){
                head++;
            }
            bool flag=false;
            for(int j=head;j<tail;j++){
                if(q[j].p>=p&&q[j].used==0){
                    flag=true;
                    q[j].used=1;
                    break;
                }
            }
            if(!flag)ans+=p;
        }
    }
    cout <<ans;
    return 0;
} 
