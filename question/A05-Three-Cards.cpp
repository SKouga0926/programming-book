using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N, K;
    cin >> N >> K;

    int answer = 0;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            {
                int k = K - i - j;
                if (k >= 1 && k <= N) 
                {
                    answer++;
                }
            }

    cout << answer << endl;

    return 0;
}
