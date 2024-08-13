using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    string N;
    cin >> N;

    int Answer = 0;

    for (int i = 0; i < N.size(); i++)
    {
        int keta;
        keta = (1 << (N.size() - 1 - i));
        
        if (N[i] == '0') Answer += 0 * keta;
        if (N[i] == '1') Answer += 1 * keta;
    }

    cout << Answer << endl;

    return 0;
}
