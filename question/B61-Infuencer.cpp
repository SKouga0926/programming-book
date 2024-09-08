using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N, M;
int A[100009], B[100009];

// 隣接リスト
vector<int> G[100009];

int main(void)
{
    // 入力
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];

        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    int max_friends = 0;
    int max_id = 0;

    for (int i = 1; i <= N; i++) {
        max_friends = max(max_friends, (int)G[i].size());
    }

    for (int i = 1; i <= N; i++) {
        if (max_friends == (int)G[i].size()) {
            max_id = i;
            break;
        }
    }

    cout << max_id << endl;

    return 0;
}
