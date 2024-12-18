#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int W;
int w[109];
int v[109];
ll dp[109][100009];

int main(void)
{
    // 入力
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    // 初期化処理
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= 100000; j++) {
            dp[i][j] = INT32_MAX;
        }

    // 動的計画法
    dp[0][0] = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= 100000; j++) {
            if (j - v[i] >= 0) dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            else dp[i][j] = dp[i - 1][j];
        }

    // 結果出力
    ll Answer;
    for (int i = 0; i <= 100000; i++) {
        if (dp[N][i] <= W) Answer = i;
    }

    cout << Answer << endl;

    return 0;
}
