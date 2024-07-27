//二维差分公式 
pre[i][j]-pre[i-1][j]+pre[i][j-1]+pre[i-1][j-1] =a[i][j];

pre[i][j]=a[i][j]-a[i][j-1]-a[i-1][j]+a[i-1][j-1];

//二维差分修改
b[x1][y1]+1
b[x2+1][y1]-1
b[x2+1][y2+1]+1
b[x1][x2+1]-1 


//二分查找模板
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
		int l=1,r=n;  //定义查找区间
		bool flag=false;
		while(l<=r){  //当查找区间仍然有数字 
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



//三分查找模板 
#include <bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[10010],n;
//工具函数
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
//主函数
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
            //两个三等分点
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
 
 
