#include <bits/stdc++.h>
#include <queue>

using namespace std;
//STL实现队列 
queue<int>q;//定义队列
q.push(x);//队列新来一个元素
int x=q.front();//队头元素 
q.pop();  //删除队头元素
if(q.empty() ) { //队列为空 
	
}
//队列先进先出 


//数组实现队列 
int q[1024];//定义队列    数组大小=最多有多少次插入操作 
int head=1,tail=1;//q[head]队列第一个元素，q[tail] 表示队列最后一个元素的下一个位置
q[tail++]=x;//队列新来一个元素（插入元素） 
cout <<q[head];//输出队头
head++;//删除队头
if(head==tail){//队列为空 
	
} 


//优先队列
priority_queue<int>q; //优先队列定义，最大值放到队头 
q.push(x);//插入数字x 
q.top();//普通队列q.front(),优先队列是q.top()
if(q.empty())//是否为空

piority_queue<int,vector<int>,greater<int> >q;//最小值放队头 两个">"要有空格避免识别成cin >>的输入符

//！！！以上明天默写！！！ 

struct node{
	int x,y;
	bool operator >(const node& a)const{
		return x+y>a.x+a.y;
	}
}; 
priority_queue<node>;
int main(){
	
	return 0;
}
 
 
//pair可以绑定两个变量，在默认库里
#include <iostream>
using namespace std;
pair <int,int> pii;
//cout << p.first<<" "<< p.second;
//p=make_pair(1,3);
typedef pair<int,int> pii;
typedef pair<string,int> psi;
//pair可以比较大小但是两个pair都是一个类型
//优先按照first 
int main(){
	pii x;
	pii y=make_pair(1,3);
	
} 


//map用法 map一一对应
map<int,int> m;//定义 
m[3]++;//m[3]=1;
m[-100]=10//-100->10
m[2147483647]=1234;//2147483647->1234
//map每次访问都需要log(n)的时间,n为map.size(); 
