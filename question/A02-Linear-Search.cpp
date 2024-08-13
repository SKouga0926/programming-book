using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int N, X;
    cin >> N >> X;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    bool answer = false;

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) == X)
        {
            answer = true;
            break;
        }
    }

    if (answer)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}
