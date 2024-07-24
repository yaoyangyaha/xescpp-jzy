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


//前缀和&差分 
//针对数字序列进行的操作 

//前缀和公式  需要默写 
pre[i]=pre[i-1]+a[i]; 
//区间和=》前缀和 
//区间和公式  需要默写 
a[1]+......+a[r]=pre[r]-pre[l-1]  //前面所有元素的和
 


//差分 用来维护区间修改的结果
//当需要进行a[l],a[l+1],.....a[r]整体增加x时
//差分数组只需要做 b[l]+=x;b[r+1]-=x;  需要默写 

b[i]=a[i]-a[i-1]; //相邻元素的差值 需要默写 

//差分数组变回原数组->差分数组的前缀和数组就是原数组
b[1]=a[1];
b[2]=a[2]-a[1];
b[3]=a[3]-a[2];
b[4]=a[4]-a[3];

a[l],a[l+1],.....,a[r]//区间修改
b[l]   +1; 
b[r+1] -1;
//最后，如果差分数组想要得到原数组时，求它的前缀和数组 


//二位前缀和 在二维数组上
pre[i][j]=pre[i][j-1]-pre[i-1][j-1]+a[i][j];
 
//二维数组区间查询从(x1,y1)到(x2,y2)的矩形范围内，数字和是多少
pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1]; 

