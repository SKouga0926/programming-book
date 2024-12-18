#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(ll A, ll B)
{
    if (A <= B) swap(A, B);

    while (true) {
        ll R = A % B;
        A = B;
        B = R;

        if (B == 0) break;
    }

    return A;
}

ll LCM(ll A, ll B)
{
    ll gcd = GCD(A, B);
    ll lcm = A / gcd * B;

    return lcm;
}

ll A, B;

int main(void)
{
    // 入力
    cin >> A >> B;

    cout << LCM(A, B) << endl;
    

    return 0;
}
