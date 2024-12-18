using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int num_query;
int type_query;

ll x;
set<ll> Set;

ll Answer;

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

            if (!Set.empty()) {

                auto itr_next = Set.lower_bound(x);

                if (itr_next != Set.begin()) {
                    auto itr_last = itr_next--;

                    int diff = min(abs((*itr_next) - x), abs((*itr_last) - x));
                    cout << diff << endl;
                }
                else {
                    auto itr_last = itr_next;

                    int diff = min(abs((*itr_next) - x), abs((*itr_last) - x));
                    cout << diff << endl;
                }
                
            }

            else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
