using namespace std;
#include <bits/stdc++.h>

int D, N;
int L[100009], R[100009];
int B[100009], Answer[100009] = {0};

int main(void)
{
    // 入力
    cin >> D;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    // 前日比計算
    for (int i = 1; i <= N; i++) {
        B[L[i]] += 1;
        B[R[i] + 1] -= 1;
    }

    // 各日の参加者数計算
    for (int i = 1; i <= D; i++) {
        Answer[i] = Answer[i - 1] + B[i];
    }

    // 各日の参加者数表示
    for (int i = 1; i <= D; i++) {
        cout << Answer[i] << endl;
    }

    
    

    return 0;
}
