//
// Created by 耀阳 on 2024/7/20.
//
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[200000],n,cnt;
int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j++){
            if((a[i]-a[j])%200!=0&&(a[i]-a[j])>=200){
                continue;
            }
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
/*
#include<cstdio>
using namespace std;

int n, box[210];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int x;
		scanf("%d", &x);
		box[x % 200]++;
	}

	long long cnt = 0;
	for (int i = 0; i <= 199; i++)
		cnt += 1ll * box[i] * (box[i] - 1) / 2;//  1ll是long long类型的1
	printf("%lld\n", cnt);
	return 0;
}
 */
