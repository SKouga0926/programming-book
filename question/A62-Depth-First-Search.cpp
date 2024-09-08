using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N, M;
int A[100009], B[100009];
vector<int> G[100009];
bool visited[100009];

void dfs(int pos)
{
    visited[pos] = true;

    for (int i = 0; i < (int)G[pos].size(); i++) {
        int next = G[pos][i];
        if (visited[next] == false) dfs(next);
    }

    return;
}

int main(void)
{
    // 入力
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];

        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    for (int i = 1; i <= N; i++) visited[i] = false;

    dfs(1);
    
    string Answer = "The graph is connected.";

    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) Answer = "The graph is not connected.";
    }

    cout << Answer << endl;

    return 0;
}
