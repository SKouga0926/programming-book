using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N, M;
int A[100009], B[100009];
vector<int> G[100009];

int dist[100009];
queue<int> que;

int main(void)
{
    // 入力
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];

        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // 1番目の頂点の距離を0とする．
    // それ以外は-1で初期化する．
    for (int i = 1; i <= N; i++) {
       dist[i] = -1;
    }

    dist[1] = 0;
    que.push(1);

    while(!que.empty()) {

        int pos = que.front();
        que.pop();

        for (int next : G[pos]) {

            if (dist[next] == -1) {
                que.push(next);

                dist[next] = dist[pos] + 1;

            }
        }
    }

    for (int i = 1; i <= N; i++) cout << dist[i] << endl;


    return 0;
}
