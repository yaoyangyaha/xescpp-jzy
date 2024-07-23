//
// Created by 耀阳 on 2024/7/22.
//
#include<bits/stdc++.h>//头文件
using namespace std;
#define N 1002
int a[N],bot1[N][N],bot2[N][N];
int main(){
    int n,num1=1,Num2=1,num2=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];//输入
    sort(a+1,a+n+1);//排序
    for(int i=2;i<=n;i++){
        if(a[i]!=a[i-1]) {
            num1++;
            num2=max(Num2,num2);
            Num2=1;
        }
        if(a[i]==a[i-1]) {
            Num2++;
        }
    }
    num2=max(Num2,num2);//记录两种容器数量
    if(num1>num2){//比较
        cout<<num2<<" "<<2<<endl;
        int x=1;
        for(int i=1;i<=n;i++){
            if(a[i]!=a[i-1] || i==1){
                x=1;
                bot2[x][++bot2[x][0]]=a[i];
            }
            else{
                x++;
                bot2[x][++bot2[x][0]]=a[i];//存入
            }
        }
        for(int i=1;i<=num2;i++){
            cout<<bot2[i][0]<<" ";
            for(int j=1;j<=bot2[i][0];j++){
                cout<<bot2[i][j]<<" ";
            }
            cout<<endl;//输出
        }
    }
    else{
        cout<<num1<<" "<<1<<endl;
        int x=1;
        for(int i=1;i<=n;i++){
            if(a[i]==a[i-1] || i==1){
                bot1[x][++bot1[x][0]]=a[i];
            }
            else{
                x++;
                bot1[x][++bot1[x][0]]=a[i];
            }
        }
        for(int i=1;i<=num1;i++){
            cout<<bot1[i][0]<<" ";
            for(int j=1;j<=bot1[i][0];j++){
                cout<<bot1[i][j]<<" ";
            }
            cout<<endl;
        }
    }//同理
    return 0;
}