#include <iostream>
using namespace std;
double num[100010],k[100010];
int exp,p,n,lp,ln,kk,pp,nn,maxx,x,id,y;
int main(){
    cin >>exp;
    cin >> p >> n;
    int cp=p;
    while(p!=-1&&n!=-1){
        num[p]=n;
        lp=p;ln=n;
        cin >> p >> n;
        k[lp]=(n-ln)/(p-lp);
    }
    int cnt;
    cin >> cnt;
    for(int i=cp;i<=lp;i++){
        if(num[i]!=0){
            kk=k[i];
            pp=i;
            nn=num[i];
        }else{
            num[i]=(i-pp)*kk+nn;
        }
    }
    while(ln-cnt>0){
        lp++;
        ln-=cnt;
        num[lp]=ln;
    }

    for(int i=cp;i<=lp;i++){
        x=(i-cp)*num[i];
        if(x>maxx){
            maxx=x;
            id=i;
        }
    }
    if(id==exp){
        cout << 0;
        return 0;
    }if(id>exp){
        x=1;
        while(true){
            maxx=id=0;
            for(int i = cp;i<=lp;i++){
                y = (i-cp+x)*num[i];
                if(y>maxx){
                    maxx=y;
                    id=i;
                }
            }
            if(id==exp){
                cout << x;
                return 0;
            }
            x++;
        }
    }else{
        x=-1;
        while(true){
            maxx=id=0;
            for(int i = cp+1;i<=lp;i++){
                y = (i-cp+x)*num[i];
                if(y>=maxx){
                    maxx=y;
                    id=i;
                }
            }
            if(id==exp){
                cout << x;
                return 0;
            }
            x--;
        }
    }
    return 0;
}