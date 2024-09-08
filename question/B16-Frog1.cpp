using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N;
int h[100009];
int dp[100009];

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> h[i];

    dp[1] = 0;
    dp[2]  = abs(h[2] - h[1]);

    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[N] << endl;


    return 0;
}
