#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N, A[100009];
char T[100009];

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> T[i] >> A[i];

    int Answer = 0;

    // 処理
    for (int i = 1; i <= N; i++) {
        if (T[i] == '+') Answer += A[i];
        else if (T[i] == '-') Answer -= A[i];
        else if (T[i] == '*') Answer *= A[i];

        Answer += 10000;

        Answer = Answer % 10000;

        cout << Answer << endl;
    }

    return 0;
}
