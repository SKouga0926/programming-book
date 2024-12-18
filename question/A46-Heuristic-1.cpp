#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int X[159], Y[159];
int P[159];
bool visited[159];

double GetDistance(int p, int q)
{
    return sqrt((X[p] - X[q]) * (X[p] - X[q]) + (Y[p] - Y[q]) * (Y[p] - Y[q]));
}

void PlayGreedy(void) 
{
    // 初期化
    int CurrentPlace = 1;
    for (int i = 1; i <= N; i++) visited[i] = false;
    P[1] = 1;
    visited[1] = true;

    for (int i = 2; i <= N; i++) {
        double MinDistance = 10000;
        int MinDistanceId = -1;

        for (int j = 1; j <= N; j++) {
            if (visited[j] == true) continue;

            double NewDistance = GetDistance(CurrentPlace, j);
            if (MinDistance > NewDistance) {
                MinDistance = NewDistance;
                MinDistanceId = j;
            }
        }

        visited[MinDistanceId] = true;
        CurrentPlace = MinDistanceId;
        P[i] = MinDistanceId;
    }

    P[N+1] = 1;
}

int main(void)
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];

    PlayGreedy();

    for (int i = 1; i <= N + 1; i++) cout << P[i] << endl;
    

    return 0;
}
