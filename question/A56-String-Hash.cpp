using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

// 入力で与えられる変数
ll N, Q;
string S;
ll a[200009], b[200009], c[200009], d[200009];

// ハッシュ値を計算するための変数
ll mod = INT32_MAX;
ll T[200009], H[200009];
ll Power100[200009];

ll Hash_value(int l, int r) {
    ll val = H[r] - (H[l - 1] * Power100[r - l + 1]) % mod;

    if (val < 0) val += mod;
    return val;
}

int main(void)
{
    // 入力
    cin >> N >> Q;
    cin >> S;
    for (int i = 1; i <= Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    // 文字を数値に変換
    for (int i = 1; i <= N; i++) T[i] = (S[i - 1] - 'a') + 1;
    
    // B^0, B^1...を計算
    Power100[0] = 1;
    for (int i = 1; i <= N; i++) Power100[i] = 100 * Power100[i - 1] % mod;

    // Hを計算する
    H[0] = 0;
    for (int i = 1; i <= N; i++) H[i] = (100 * H[i - 1] + T[i]) % mod;

    // クエリに答える
    for (int i = 1; i <= Q; i++) {
        ll Hash1 = Hash_value(a[i], b[i]);
        ll Hash2 = Hash_value(c[i], d[i]);
        if (Hash1 == Hash2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }     

    return 0;
}
