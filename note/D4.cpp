//栈：后进先出

#include <bits/stdc++.h>
using namespace std;
int s[10010];
int top;
int main(){
	//数组实现栈
	s[++top]=1; //入栈操作 
	top--;    //出栈一个元素 
	if(top==0)   //如果栈为空 
	s[top]    //栈顶元素
	
	//STL实现栈 
	stack<int> s1;//定义一个栈s1 
	s1.push(1);  //将数字1压入栈内 
	s1.pop();  //将数字弹出栈顶 
	s1,top();  //栈顶元素 
	if(s1.empty()) //如果栈是空的 
	cout << s1.size()//栈大小 
} 

//中缀表达式模板 
#include <bits/stdc++.h>
using namespace std;
string a;  //"3+2*(5+4-(2*3)" 
int cur;   //表示扫描到字符串的位置 
int factor();//预定义factor函数
int term(){//乘除 
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
int expr(){//加减 
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
int factor(){//处理数字和括号 
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




//scanf输入读入技巧
//不能读string 
//int %d     long long %lld      double %lf       char%c 
int x,y;
char s[1024];
scanf("%d%d",&x,&y);
scanf("%s",s)//读char不加&符号
int a,b,c;
sting s;
s= s+s + s;

s="%"+to_string(4)+"d";
scanf("%2d%2d%2d",&a,&b,&c); 
scanf(s.c_str(),&a,&b,&c);//s.c_str()把s转char数组 
int x,y;

int a,b;
sscanf(s.c_str(),"%d+%d",&a,&b) //从字符串读取数字 
printf("%d",x+y);

char s[1024];//把数字读入到字符串数组 
int x=100,y=120;
sprintf(s,"%d %d",x,y);
printf("%s",s);
string st=string(s);
cout << st;

char s1[]="hello world";// \n字符结束 
cout << int('\n');



//离散化
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

