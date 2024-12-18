#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int X[159], Y[159];
int P[159];

int ReadInt(int a, int b)
{
    return a + rand() % (b - a + 1);
}

double GetDistance(int p, int q)
{
    return sqrt((X[p] - X[q]) * (X[p] - X[q]) + (Y[p] - Y[q]) * (Y[p] - Y[q]));
}

double GetScore(void)
{
    double sum = 0;
    
    for (int i = 1; i <= N; i++) {
        sum += GetDistance(P[i], P[i + 1]);
    }

    return sum;
}

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];

    // 初期解生成
    P[1] = 1, P[N + 1] = 1;
    for (int i = 2; i <= N; i++) P[i] = i;

    // 山登り法（局所探索法）
    double CurrentScore = GetScore();

    for (int t = 1; t <= 200000; t++) {

        int R = ReadInt(2, N);
        int L = ReadInt(2, N);
        if (L == R) continue;
        if (L > R) swap(L, R);

        reverse(P + L, P + R + 1);
        double NewScore = GetScore();

        if (CurrentScore >= NewScore) CurrentScore = NewScore;
        else reverse(P + L, P + R + 1);
    } 

    // 出力
    for (int i = 1; i <= N + 1; i++) cout << P[i] << endl;

    return 0;
}
