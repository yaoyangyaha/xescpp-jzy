#include <bits/stdc++.h>
#include <queue>

using namespace std;
//STLʵ�ֶ��� 
queue<int>q;//�������
q.push(x);//��������һ��Ԫ��
int x=q.front();//��ͷԪ�� 
q.pop();  //ɾ����ͷԪ��
if(q.empty() ) { //����Ϊ�� 
	
}
//�����Ƚ��ȳ� 


//����ʵ�ֶ��� 
int q[1024];//�������    �����С=����ж��ٴβ������ 
int head=1,tail=1;//q[head]���е�һ��Ԫ�أ�q[tail] ��ʾ�������һ��Ԫ�ص���һ��λ��
q[tail++]=x;//��������һ��Ԫ�أ�����Ԫ�أ� 
cout <<q[head];//�����ͷ
head++;//ɾ����ͷ
if(head==tail){//����Ϊ�� 
	
} 


//���ȶ���
priority_queue<int>q; //���ȶ��ж��壬���ֵ�ŵ���ͷ 
q.push(x);//��������x 
q.top();//��ͨ����q.front(),���ȶ�����q.top()
if(q.empty())//�Ƿ�Ϊ��

piority_queue<int,vector<int>,greater<int> >q;//��Сֵ�Ŷ�ͷ ����">"Ҫ�пո����ʶ���cin >>�������

//��������������Ĭд������ 

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
 
 
//pair���԰�������������Ĭ�Ͽ���
#include <iostream>
using namespace std;
pair <int,int> pii;
//cout << p.first<<" "<< p.second;
//p=make_pair(1,3);
typedef pair<int,int> pii;
typedef pair<string,int> psi;
//pair���ԱȽϴ�С��������pair����һ������
//���Ȱ���first 
int main(){
	pii x;
	pii y=make_pair(1,3);
	
} 


//map�÷� mapһһ��Ӧ
map<int,int> m;//���� 
m[3]++;//m[3]=1;
m[-100]=10//-100->10
m[2147483647]=1234;//2147483647->1234
//mapÿ�η��ʶ���Ҫlog(n)��ʱ��,nΪmap.size(); 


//ǰ׺��&��� 
//����������н��еĲ��� 

//ǰ׺�͹�ʽ  ��ҪĬд 
pre[i]=pre[i-1]+a[i]; 
//�����=��ǰ׺�� 
//����͹�ʽ  ��ҪĬд 
a[1]+......+a[r]=pre[r]-pre[l-1]  //ǰ������Ԫ�صĺ�
 


//��� ����ά�������޸ĵĽ��
//����Ҫ����a[l],a[l+1],.....a[r]��������xʱ
//�������ֻ��Ҫ�� b[l]+=x;b[r+1]-=x;  ��ҪĬд 

b[i]=a[i]-a[i-1]; //����Ԫ�صĲ�ֵ ��ҪĬд 

//���������ԭ����->��������ǰ׺���������ԭ����
b[1]=a[1];
b[2]=a[2]-a[1];
b[3]=a[3]-a[2];
b[4]=a[4]-a[3];

a[l],a[l+1],.....,a[r]//�����޸�
b[l]   +1; 
b[r+1] -1;
//���������������Ҫ�õ�ԭ����ʱ��������ǰ׺������ 


//��λǰ׺�� �ڶ�ά������
pre[i][j]=pre[i][j-1]-pre[i-1][j-1]+a[i][j];
 
//��ά���������ѯ��(x1,y1)��(x2,y2)�ľ��η�Χ�ڣ����ֺ��Ƕ���
pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1]; 

