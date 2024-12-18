#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int Q;
int X[10009];

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}

int main(void)
{
    // 入力
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> X[i];

    for (int i = 1; i <= Q; i++) {
        if (isPrime(X[i]) == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    

    return 0;
}
