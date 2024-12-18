using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int num_query;
int type_query;

string x;
int y;
map<string, int> Map;


int main(void)
{

    // 入力
    cin >> num_query;
    for (int i = 1; i <= num_query; i++) {
        cin >> type_query;

        if (type_query == 1) {
            cin >> x >> y;
            Map[x] = y;
        }
        else if (type_query == 2) {
            cin >> x;
            cout << Map[x] << endl;
        }
    }
    

    return 0;
}
