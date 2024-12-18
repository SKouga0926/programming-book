#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int GCD(int A, int B)
{
    if (A <= B) swap(A, B);

    while (true) {
        int R = A % B;
        A = B;
        B = R;

        if (B == 0) break;
    }

    return A;
}

int A, B;

int main(void)
{
    // 入力
    cin >> A >> B;

    cout << GCD(A, B) << endl;

    return 0;
}
