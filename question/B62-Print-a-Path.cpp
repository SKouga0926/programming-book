using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N, M;
int A[100009], B[100009];
vector<int> G[100009];

bool visited[100009] = {false};

vector<int> path;
vector<int> Answer;

void dfs(int pos)
{
    visited[pos] = true;

    if (pos == N) {
        Answer = path;
    }

    for (int next : G[pos]) {

        if (visited[next] == false) {

            path.push_back(next);
            dfs(next);
            path.pop_back();
        }

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

    // 初期位置
    path.push_back(1);
    dfs(1);

    for (int i = 0; i < (int)Answer.size(); i++) cout << Answer[i] << " ";
    cout << endl;

    return 0;
}
