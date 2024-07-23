//
// Created by 耀阳 on 2024/7/21.
//
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int n,maxn=0,sum;
struct node{
    string name;
    int ex_score;
    int cl_score;
    string isganbu;
    string iswest;
    int lunwen;
    int money;
}students[105];
int main()
{
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> students[i].name >> students[i].ex_score >>students[i].cl_score>>students[i].isganbu>>students[i].iswest>>students[i].lunwen;
    }
    for(int i = 1;i<=n;i++){
        if(students[i].ex_score>80&&students[i].lunwen>=1){
            students[i].money+=8000;
        }
        if(students[i].ex_score>85&&students[i].cl_score>80){
            students[i].money+=4000;
        }
        if(students[i].ex_score>90){
            students[i].money+=2000;
        }
        if(students[i].ex_score>85&&students[i].iswest=="Y"){
            students[i].money+=1000;
        }
        if(students[i].cl_score>80&&students[i].isganbu=="Y"){
            students[i].money+=850;
        }
    }
    for(int i = 1;i<=n;i++){
        sum +=students[i].money;
        if(students[i].money>maxn){
            maxn = students[i].money;
        }
    }
    for(int i = 1;i<=n;i++){
        if(students[i].money==maxn){
            cout << students[i].name<<endl<<students[i].money;
            break;
        }
    }
    cout<<endl << sum;
    return 0;
}