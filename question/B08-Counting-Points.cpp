#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N, Q;
int X[100009], Y[100009];
int a[100009], c[100009], b[100009], d[100009];

int T[1500][1509];
int Z[1509][1509];

int H = 1500, W = 1500;

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    // 各座標にある点の数を数える
    for (int i = 1; i <= N; i++) T[X[i]][Y[i]] += 1;

    // 累積和をとる
    for (int i = 0; i <= H; i++)
        for (int j = 0; j <= W; j++) Z[i][j] = 0;

    // 横方向計算
    for (int i = 1; i <= H; i++)
        for (int j = 1; j <= W; j++) {
            Z[i][j] = Z[i][j - 1] + T[i][j];
        } 


    // 縦方向計算
    for (int i = 1; i <= W; i++)
        for (int j = 1; j <= H; j++) {
            Z[i][j] = Z[i - 1][j] + Z[i][j];
        }

    // 答え表示
    for (int i = 1; i <= Q; i++) {
        cout << Z[c[i]][d[i]] + Z[a[i] - 1][b[i] - 1] - Z[a[i] - 1][d[i]] - Z[c[i]][b[i] - 1] << endl;
    }
    

    return 0;
}
