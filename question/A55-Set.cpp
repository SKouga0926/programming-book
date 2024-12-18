using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int num_query;
int type_query;

int x;
set<int> Set;

int main(void)
{
    // 入力
    cin >> num_query;
    for (int i = 1; i <= num_query; i++) {
        cin >> type_query;

        if (type_query == 1) {
            cin >> x;
            Set.insert(x);
        }
        else if (type_query == 2) {
            cin >> x;
            Set.erase(x);
        }
        else if (type_query == 3) {
            cin >> x;
            auto itr = Set.lower_bound(x);

            if (itr == Set.end()) cout << "-1" << endl;
            else cout << (*itr) << endl;
        }
    }
    

    return 0;
}
