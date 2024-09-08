using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N, S;
int A[69];
bool dp[69][10009];

vector<int> Answer;

int main(void)
{
    // 入力
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // dpテーブル作成
    dp[0][0] = true;
    for (int i = 1; i <= S; i++) dp[0][1] = false;

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
        }

    if (dp[N][S] == false) {
        cout << -1 << endl;
        return 0;
    }

    int place = S;

    for (int i = N; 1 <= i; i--) {

        if (dp[i][place] == true && dp[i-1][place] == true) {
            place = place - 0;
        }

        else {
            Answer.push_back(i);
            place = place - A[i];
        }
    }

    cout << Answer.size() << endl;

    reverse(Answer.begin(), Answer.end());
    for (int i = 0; i < Answer.size(); i++) {
        if (i >= 1) cout << " ";
        cout << Answer.at(i);
    }

    cout << endl;
        

    return 0;
}
