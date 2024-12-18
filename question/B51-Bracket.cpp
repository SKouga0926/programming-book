using namespace std;
#include <bits/stdc++.h>

typedef long long ll;

string S;
stack<int> st;

int main(void)
{   
    // “ü—Í
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '(') {
            st.push(i + 1);
        }

        if (S[i] == ')') {
            cout << st.top() << " " << i + 1 << endl;
            st.pop();

        }
    }


    return 0;
}
