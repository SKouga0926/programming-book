#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int Q;
int X[10009];
int N = 300000;
bool Deleted[300009];

int main(void)
{
    // 入力
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> X[i];
    for (int i = 2; i <= N; i++) Deleted[i] = false;

    // エラトステネスの篩
    for (int i = 2; i * i <= N; i++) {
        if (Deleted[i] == true) continue;
        for (int j = i * 2; j <= N; j += i) Deleted[j] = true;
    }

    for (int i = 1; i <= Q; i++) {
        if (Deleted[X[i]] == false) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    

    return 0;
}
