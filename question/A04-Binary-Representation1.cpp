using namespace std;
#include <bits/stdc++.h>

vector<int> MyBinaryConverter(int N)
{
    int Q, R = 0;
    int count = 0;

    vector<int> bit;

    while(true)
    {
        Q = N / 2;
        R = N % 2;

        bit.push_back(R);
        count++;

        N = Q;

        if (Q == 0) break;
    }

    for (int i = 0; i < 10 - count; i++)
    {
        bit.push_back(0);
    }

    for (auto it = bit.rbegin(); it != bit.rend(); ++it) 
    {
        cout << *it;
    }
    
    cout << endl;

    return bit;
}

int Answer(int N)
{
    int Q = 0;

    for (int i = 9; i >= 0; i--)
    {
        int wari = (1 << i);
        Q = N / wari;

        cout << Q % 2;
    }

    cout << endl;

    return Q;
}

int main(void)
{
    int N;
    cin >> N;

    MyBinaryConverter(N);
    Answer(N);

    

    return 0;
}
