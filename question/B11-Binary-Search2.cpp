using namespace std;
#include <bits/stdc++.h>

int N, Q;
int A[100009];
int X[100009];

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> X[i];

    // ソート処理
    sort(A + 1, A + N + 1);

    for (int i = 1; i <= Q; i++) {
        int index = lower_bound(A + 1, A + N + 1, X[i]) - (A + 1);
        cout << index << endl;
    }

    return 0;
}
