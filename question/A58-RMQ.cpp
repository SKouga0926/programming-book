#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class SegmentTree
{
public:
    int dat[300000], siz;

    void init(int N)
    {
        siz = 1;
        while (true) {
            siz = siz * 2;
            if (siz >= N) break;
        }

        for (int i = 1; i < siz * 2; i++) dat[i] = 0;
    }

    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        dat[pos] = x;

        while (true) {
            pos = pos / 2;

            dat[pos] = max(dat[pos * 2], dat[pos * 2 + 1]);

            if (pos == 1) break;
        }
    }

    int query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return -10000;
        if (l <= a && b <= r) return dat[u];

        int m = (a + b) / 2;
        int AnswerL = query(l, r, a, m, 2 * u);
        int AnswerR = query(l, r, m, b, 2 * u + 1);

        return max(AnswerL, AnswerR);
    }
};

int N, Q;
int Query[100009], pos[100009], x[100009], l[100009], r[100009];

SegmentTree Z;

int main(void)
{
    // 入力
    cin >> N >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> Query[i];

        if (Query[i] == 1) {
            cin >> pos[i] >> x[i];
        }

        else if (Query[i] == 2) {
            cin >> l[i] >> r[i];
        }
    }

    // クエリ処理
    Z.init(N);

    for (int i = 1; i <= Q; i++) {
        if (Query[i] == 1) {
            Z.update(pos[i], x[i]);

        }

        else if (Query[i] == 2) {
            int Answer = Z.query(l[i], r[i], 1, Z.siz + 1, 1);
            cout << Answer << endl;
        }
    }
    

    return 0;
}
