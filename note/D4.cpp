//ջ������ȳ�

#include <bits/stdc++.h>
using namespace std;
int s[10010];
int top;
int main(){
	//����ʵ��ջ
	s[++top]=1; //��ջ���� 
	top--;    //��ջһ��Ԫ�� 
	if(top==0)   //���ջΪ�� 
	s[top]    //ջ��Ԫ��
	
	//STLʵ��ջ 
	stack<int> s1;//����һ��ջs1 
	s1.push(1);  //������1ѹ��ջ�� 
	s1.pop();  //�����ֵ���ջ�� 
	s1,top();  //ջ��Ԫ�� 
	if(s1.empty()) //���ջ�ǿյ� 
	cout << s1.size()//ջ��С 
} 

//��׺���ʽģ�� 
#include <bits/stdc++.h>
using namespace std;
string a;  //"3+2*(5+4-(2*3)" 
int cur;   //��ʾɨ�赽�ַ�����λ�� 
int factor();//Ԥ����factor����
int term(){//�˳� 
	int res=factor();
	while(a[cur]=='*'||a[cur]=='/'){
		if(a[cur]=='*'){
			cur++;
			res*=factor();
		}else{
		 	cur++;
		 	res/=factor();
		}
	} 
	return res;
} 
int expr(){//�Ӽ� 
	int res=term();
	while(a[cur]=='+'||a[cur]=='-'){
		if(a[cur]=='+'){
			cur++;
			res+=term();
		}else{
			cur++;
			res-=term();
		}
	} 
	return res;
}
int factor(){//�������ֺ����� 
	int res=0;
	if(a[cur]=='('){
		cur++;
		res=expr();
		cur++;
	}else{
		while(a[cur]>='0'&&a[cur]<='9'){
			res=res*10+a[cur]-'0';
			cur++;
		}
	}
	return res;
}
int main(){
	cin >> a;
	cout << expr();
	return 0;
}




//scanf������뼼��
//���ܶ�string 
//int %d     long long %lld      double %lf       char%c 
int x,y;
char s[1024];
scanf("%d%d",&x,&y);
scanf("%s",s)//��char����&����
int a,b,c;
sting s;
s= s+s + s;

s="%"+to_string(4)+"d";
scanf("%2d%2d%2d",&a,&b,&c); 
scanf(s.c_str(),&a,&b,&c);//s.c_str()��sתchar���� 
int x,y;

int a,b;
sscanf(s.c_str(),"%d+%d",&a,&b) //���ַ�����ȡ���� 
printf("%d",x+y);

char s[1024];//�����ֶ��뵽�ַ������� 
int x=100,y=120;
sprintf(s,"%d %d",x,y);
printf("%s",s);
string st=string(s);
cout << st;

char s1[]="hello world";// \n�ַ����� 
cout << int('\n');



//��ɢ��
//1 10 10000 =>  1 2 3  
int a[100];
int b[100];
int n;
cin >> n;
for(int i=1;i<=n;i++){
	cin >> a[i];
	b[i]=a[i];
}
sort(b+1,b+n+1);
for(int i=1;i<=n;i++){
	a[i]=lower_bound(b+1,b+n+1,a[i])-b;
}

