// https://codeforces.com/contest/1375/problem/B
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
        int n, m;
        cin >> n >> m;
        bool success = true;
        int ans[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                int cur, k;
                cin >> cur;
                if (!success)
                    continue;

                k = 1 + (j == 0 || j == m - 1 ? 0 : 1) + 1 + (i == 0 || i == n - 1 ? 0 : 1);
                if (cur > k)
                    success = false;

                ans[i][j] = k;
            }

        cout << (success ? "YES" : "NO") << endl;

        if (success)
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << ans[i][j] << " ";
                cout << endl;
            }
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
