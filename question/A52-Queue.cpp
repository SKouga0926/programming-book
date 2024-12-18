using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int num_query;
int type_query;

string name;
queue<string> que;

int main(void)
{
    // 入力
    cin >> num_query;
    for (int i = 1; i <= num_query; i++) {
        cin >> type_query;
        if (type_query == 1) {
            cin >> name;
            que.push(name);
        }
        if (type_query == 2) cout << que.front() << endl;
        if (type_query == 3) que.pop();
    }

    return 0;
}
