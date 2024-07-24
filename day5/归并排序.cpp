#include <bits/stdc++.h>

using namespace std;

int n,a[100010],b[100010];

long long ans;

void Merge_sort(int L, int mid, int R)

{

    //ijk记录初始化位置

    int i=L;int j=mid+1;int k=L;

    //左或右 超过右边界结束循环

    while(i<=mid&&j<=R){

        //比较ij位置值大小

        if(a[i]<=a[j]){

            //如果i<=j位置值，则赋值给b，更新指针

            b[k]=a[i];

            k++;i++;

        }else{

            //否则记录逆序对数量，赋值给b，更新指针

            ans+=mid-i+1;

            b[k]=a[j];

            k++;j++;

        }



    }

    while(i<=mid){

        //左边没到边界

        //剩余赋值给b

        b[k]=a[i];

        k++;i++;





    }

    while(j<=R){

        //右边没到边界

        //剩余赋值给b

        b[k]=a[j];

        k++;j++;

    }

    //将b复制给a

    for(int i = L;i<=R;i++){

        a[i]=b[i];

    }

}

void Merge(int L, int R)

{

    //递归边界

    if(L>=R)return;

    //确认拆分位置

    int mid=(L+R)/2;

    //对左边拆分

    Merge(L,mid);

    //对右边拆分

    Merge(mid+1,R);



    Merge_sort(L, mid, R);

}

int main(){

    //输入

    cin >> n;

    for(int i = 1;i<=n;i++){

        cin >> a[i];

    }

    Merge(1, n);  //拆分函数

    //输出逆序对数量

    cout << ans <<endl;
    for (int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }
}
