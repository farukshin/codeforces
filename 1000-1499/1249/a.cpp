// https://codeforces.com/contest/1249/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        bool two = false;
        bool v[105];
        memset(v, false, sizeof(v));

        while (n--)
        {
            int cur;
            cin >> cur;
            if (!two && !v[cur])
                v[cur + 1] = true, v[cur - 1] = true;
            else if (!two && v[cur])
                two = true;
        }

        cout << (two ? 2 : 1) << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
