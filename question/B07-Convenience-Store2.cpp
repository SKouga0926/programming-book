using namespace std;
#include <bits/stdc++.h>

int T, N;
int L[500009], R[500009];
int B[500009], Answer[500009] = {0};

int main(void)
{
    // 入力
    cin >> T;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    // 前時比
    for (int i = 1; i <= N; i++) {
        B[L[i]] += 1;
        B[R[i]] -= 1;
    }

    // 従業員数計算
    Answer[0] = B[0];
    for (int i = 1; i < T; i++) {
        Answer[i] = Answer[i - 1] + B[i];
    }

    // 従業員数表示
    for (int i = 0; i < T; i++) {
        cout << Answer[i] << endl;
    }


    return 0;
}
