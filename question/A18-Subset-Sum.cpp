#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int S;
int A[69];
bool dp[69][10009];

int main(void)
{
    // 入力
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // 初期化処理
    dp[0][0] = true;

    for (int i = 1; i <= S; i++) dp[0][i] = false;


    // 動的計画法
    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= S; j++) {

            if (j - A[i] < 0) {
                if (dp[i - 1][j] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }

            else if (j - A[i] >= 0) {
                if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }

    if (dp[N][S] == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
