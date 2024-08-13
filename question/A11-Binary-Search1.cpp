using namespace std;
#include <bits/stdc++.h>

int N, X;
int A[100009];

int search(int X)
{
    int L = 1, R = N;

    while(L <= R)
    {
        int M = (L + R) / 2;

        if (A[M] > X) R = M - 1;
        else if (A[M] == X) return M;
        else if (A[M] < X) L = M + 1;
    }
}

int main(void)
{
    // 入力
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];

    int Answer = search(X);
    cout << Answer << endl;

    return 0;
}
