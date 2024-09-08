using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N, S;
int A[69];
bool dp[69][100009];

int main(void)
{
    // 入力
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    dp[0][0] = true;
    for (int i = 1; i <= S; i++) dp[0][i] = false;

    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= S; j++) {

            if (j < A[i]) {
                if (dp[i-1][j] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }

            if (j >= A[i]) {
                if (dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }

            if (dp[i][S] == true) break;
        }

        if (dp[N][S] == true) cout << "Yes" << endl;
        else cout << "No" << endl;
            

    return 0;
}
