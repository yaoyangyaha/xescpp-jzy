//
// Created by 耀阳 on 2024/7/22.
//
#include <bits/stdc++.h>
using namespace std;

char a[1005], b[1005];

int arr[1005], brr[1005], ans[1005];
int main(){
    cin >> a >> b;

    int lena = strlen(a);
    int lenb = strlen(b);
    for(int i = 0; i < lena; i++) arr[i] = a[lena - i - 1] -'0';
    for(int i = 0; i < lenb; i++) brr[i] = b[lenb - i - 1] -'0';

    fill(ans, ans + lena + lenb + 1, 0);

    for(int i = 0; i < lena; i++){
        for(int j = 0; j < lenb; j++){
            ans[i + j] += arr[i] * brr[j];
            if(ans[i + j] > 9) {
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }
    }

    int len = lena + lenb;
    while(ans[len] == 0 && len > 0) len--;
    for(int i = len; i >= 0; i--) cout << ans[i];
    return 0;
}
