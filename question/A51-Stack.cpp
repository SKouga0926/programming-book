using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int Q;
int QueryType[100009];
string x[100009];

stack<string> S;

int main(void)
{
    // 入力
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> QueryType[i];
        if (QueryType[i] == 1) cin >> x[i];
    }

    for (int i = 1; i <= Q; i++) {
        if (QueryType[i] == 1) S.push(x[i]);
        else if (QueryType[i] == 2) cout << S.top() << endl;
        else if (QueryType[i] == 3) S.pop();
    }

    return 0;
}
