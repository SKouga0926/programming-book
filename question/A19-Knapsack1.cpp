using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

ll N, W;
ll w[100009], v[100009];
ll dp[109][100009];

int main(void)
{
    // 入力・配列の初期化
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= W; j++) dp[i][j] = 0;

    // 動的計画法
    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }
        }

    ll Answer = 0;
    for (int i = 0; i <= W; i++) Answer = max(Answer, dp[N][i]);

    cout << Answer << endl;

    return 0;
}
