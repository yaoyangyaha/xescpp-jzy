#include <bits/stdc++.h>
using namespace std;
int n,a[1005],a1[1005],b[1005],b1[1005],temp=0;//一个数组开两次一个用来排序一个用来展示交换
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            a1[i]=a[i];
        }
        for(int i=1;i<=n;i++){
            cin >> b[i];
            b1[i]=b[i];
        }
        //从大到小排序两个队列
        sort(a1+1,a1+n+1);
        sort(b1+1,b1+n+1);

        for(int i=1;i<=n;i++){
            if(a1[i]!=b1[i])
                temp=1;
        }
        if(temp){//超出限制
            printf("NO\n");//cout会炸？快读压读入时长会不会好点
        }
        else{//如果可以
            printf("YES\n");//cout会炸？
            for(int i=1;i<=n;i++)
            {
                int x;
                for(int j=1;j<=n;j++)
                {
                    if(a[j]==b[i])
                    {
                        x=j;
                        break;
                    }
                }
                for(int j=x;j>i;j--)
                {
                    //前后两人交换并且输出交换后结果
                    swap(a[j],a[j-1]);
                    printf("%d %d\n",j,j-1);
                }
            }
            printf("0 0\n");
        }
    }
}