//
// Created by 耀阳 on 2024/7/20.
//
#include <iostream>
using namespace std;
int n,score1,score2;
int score(int a,int b, int c){
    if(a==b&&b==c){
        return 114514+a;
    }else if(a==b){
        return 100+c;
    }else if(a==c){
        return 100+b;
    }else if(b==c){
        return 100+a;
    }else{
        return a+b+c;
    }
}
int main()
{
    int a,b,c,x,y,z;
    cin >> n;
    for(int i =1;i<=n;i++){
        cin >> a >> b >> c;
        cin >> x >> y >> z;
        score1=score(a,b,c);
        score2=score(x,y,z);
        if(score1>score2){
            cout << "Eric"<<endl;
        }else if(score1<score2){
            cout << "Computer"<<endl;
        }else{
            cout <<"Balance"<<endl;
        }
    }
    return 0;
}