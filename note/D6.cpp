//��ά��ֹ�ʽ 
pre[i][j]-pre[i-1][j]+pre[i][j-1]+pre[i-1][j-1] =a[i][j];

pre[i][j]=a[i][j]-a[i][j-1]-a[i-1][j]+a[i-1][j-1];

//��ά����޸�
b[x1][y1]+1
b[x2+1][y1]-1
b[x2+1][y2+1]+1
b[x1][x2+1]-1 


//���ֲ���ģ��
#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	int n,m;
	cin >> n>> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	} 
	while(m--){
		int x;
		cin >> x;
		int l=1,r=n;  //�����������
		bool flag=false;
		while(l<=r){  //������������Ȼ������ 
			int mid=(l+r)/2;
			if(a[mid]==x){
				flag=true;
				cout << mid<<" ";
				break;
			}
			if(a[mid]<x){
				l=mid+1;
			}else{
				r=mid+1;
			}
		} 
		if(!flag)cout <<-1<<" ";
	}
	return 0;
}



//���ֲ���ģ�� 
#include <bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[10010],n;
//���ߺ���
double f(double x,int i){
    return a[i]*x*x+b[i]*x+c[i];
}
double mf(double x){
    double maxx=f(x,1);
    for(int i=2;i<=n;i++){
        maxx=max(maxx,f(x,i));
    }
    return maxx;
}
//������
int main(){
    int t;
    cin >>t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i]>>b[i]>>c[i];
        }
        double l=0,r=1000;
        while(r-l>=1e-10){
            //�������ȷֵ�
            double x1=l+(r-l)/3;
            double x2=r-(r-l)/3;
            if(mf(x1)>mf(x2)){
                l=x1;
            }else{
                r=x2;
            }
        }
        printf("%.4f\n",mf(l));
    }

    return 0;
}

//===========  
 
 
