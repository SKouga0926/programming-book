using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N, W;
    cin >> N >> W;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    bool exist = false;

    for (int bit = 0; bit < (1 << N); bit++)
    {
        vector<int> S;
        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i))
            {
                sum += a.at(i);
            }
        }

        if (sum == W)
        {
            exist = true;
            break;
        }
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
