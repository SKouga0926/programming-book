#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
bool Deleted[1000009];

int main(void)
{
    // 入力
    cin >> N;

    for (int i = 1; i <= N; i++) Deleted[i] = false;

    // エラトステネスの篩
    for (int i = 2; i * i <= N; i++)
        for (int j = i * 2; j <= N; j += i) {
            if (Deleted[j] == true) continue;
            else Deleted[j] = true;
        }

    for (int i = 2; i <= N; i++) {
        if (Deleted[i] == false) cout << i << endl;
    }
    

    return 0;
}
