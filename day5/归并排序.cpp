#include <bits/stdc++.h>

using namespace std;

int n,a[100010],b[100010];

long long ans;

void Merge_sort(int L, int mid, int R)

{

    //ijk��¼��ʼ��λ��

    int i=L;int j=mid+1;int k=L;

    //����� �����ұ߽����ѭ��

    while(i<=mid&&j<=R){

        //�Ƚ�ijλ��ֵ��С

        if(a[i]<=a[j]){

            //���i<=jλ��ֵ����ֵ��b������ָ��

            b[k]=a[i];

            k++;i++;

        }else{

            //�����¼�������������ֵ��b������ָ��

            ans+=mid-i+1;

            b[k]=a[j];

            k++;j++;

        }



    }

    while(i<=mid){

        //���û���߽�

        //ʣ�ำֵ��b

        b[k]=a[i];

        k++;i++;





    }

    while(j<=R){

        //�ұ�û���߽�

        //ʣ�ำֵ��b

        b[k]=a[j];

        k++;j++;

    }

    //��b���Ƹ�a

    for(int i = L;i<=R;i++){

        a[i]=b[i];

    }

}

void Merge(int L, int R)

{

    //�ݹ�߽�

    if(L>=R)return;

    //ȷ�ϲ��λ��

    int mid=(L+R)/2;

    //����߲��

    Merge(L,mid);

    //���ұ߲��

    Merge(mid+1,R);



    Merge_sort(L, mid, R);

}

int main(){

    //����

    cin >> n;

    for(int i = 1;i<=n;i++){

        cin >> a[i];

    }

    Merge(1, n);  //��ֺ���

    //������������

    cout << ans <<endl;
    for (int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }
}
