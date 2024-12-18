using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

// ボールの個数、
int N, X;

// 黒：#、白：.、青：@
// 元のボールの色について格納する文字列
char A[100009];

// 青色のボールを格納する
queue<int> que;

int main(void)
{
    // 入力
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];

    que.push(X);
    A[X] = '@';

    while(!que.empty()) {
        int pos = que.front();
        que.pop();

        if (pos - 1 >= 1 && A[pos - 1] == '.') {
            A[pos - 1] = '@';
            que.push(pos - 1);

        }
        if (pos + 1 <= N && A[pos + 1] == '.') {
            A[pos + 1] = '@';
            que.push(pos + 1);
        }
    }

    for (int i = 1; i <= N; i++) cout << A[i];
    cout << endl;
    

    return 0;
}
