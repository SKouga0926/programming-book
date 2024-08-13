using namespace std;
#include <bits/stdc++.h>

int N, Q;
int A[100009];
int L[100009], R[100009];

int S[100009];

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

    // 当たり：1，はずれ：-1にする
    for (int i = 1; i <= N; i++) {
        if (A[i] == 0) A[i] = -1;
    }

    // 累積和計算
    for (int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];

    // 判定処理
    for (int i = 1; i <= Q; i++) {
        if (S[R[i]] - S[L[i] - 1] > 0) cout << "win" << endl;
        else if (S[R[i]] - S[L[i] - 1] < 0) cout << "lose" << endl;
        else cout << "draw" << endl;
    }

    return 0;
}
