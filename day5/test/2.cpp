#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int word;
    int num;
    int id;
}a[1005];

bool cmp(node a, node b){
    if(a.num != b.num){
        return a.num > b.num;
    }
    else{
        return a.id < b.id;
    }
}

int main()
{

    int n;
    cin >> n;

    int cnt[105] = {}, l = 1, r = 1;
    int m;

    for(int i = 1; i <= n; i++){
        cin >> m;
        cnt[m]++;

        if(cnt[m] == 1){
            a[r].word = m;
            a[r].id = i;
            r++;
        }

        if(r - l > 10){
            cnt[a[l].word] = 0;
            l++;
        }
    }

    for(int i = l; i <= r - 1; i++){
        a[i].num = cnt[a[i].word];
    }

    sort(a+l, a+r, cmp);

    for(int i = l; i <= r-1; i++){
        cout << a[i].word << " ";
    }
    return 0;
}