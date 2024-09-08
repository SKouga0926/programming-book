using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

// 頂点数N, 辺数M
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

    for (int i = 1; i <= N; i++) {

        cout << i;
        cout <<": {";

        for (int j = 0; j < G[i].size(); j++) {
            cout << G[i][j];

            if (j != G[i].size() - 1) cout << ", ";
        }

        cout << "}";
        cout << endl;

    }

    return 0;
}
