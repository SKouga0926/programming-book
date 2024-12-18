using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

int N;
ll A[100009];
map<int, int> Map;

ll Answer = 0;

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // データ量がN．連想配列でN個あるデータ量の中で，探索するのにlogN
    // よって計算量はNlogN．

    for (int i = 1; i <= N; i++) {
        Answer += Map[A[i]];
        Map[A[i]] += 1;
    }

    cout << Answer << endl;
    

    return 0;
}
