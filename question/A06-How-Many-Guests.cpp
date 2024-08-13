using namespace std;
#include <bits/stdc++.h>

int N, Q;
int A[100009];
int L[100009], R[100009];

int S[100009];

int main(void)
{
    // 入力
    cin >> N >> Q;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

    // 累積和計算
    S[0] = 0;
    for (int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];

    // 質問回答
    for (int i = 1; i <= Q; i++) {
        cout << S[R[i]] - S[L[i] - 1] << endl;
    }

    return 0;
}
