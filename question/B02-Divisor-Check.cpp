using namespace std;
#include <bits/stdc++.h>

int main(void)
{
    int A, B;
    cin >> A >> B;

    bool answer = false;

    for (int i = A; i <= B; i++)
    {
        if (100 % i == 0)
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
