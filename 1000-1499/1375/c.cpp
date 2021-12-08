// https://codeforces.com/contest/1375/problem/C
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m0;
        cin >> n;

        cin >> m0;

        for (int i = 1; i < n; i++)
        {
            int cur;
            cin >> cur;
            if (i == n - 1)
                cout << (cur > m0 ? "YES" : "NO") << endl;
        }

    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
