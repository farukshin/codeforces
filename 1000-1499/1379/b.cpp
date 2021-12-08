// https://codeforces.com/contest/1379/problem/B
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int l, r;
    ll m;
    cin >> l >> r >> m;

    for (int i = l; i <= r; i++)
    {
        int curN = (m + r - l) / i;
        if (curN > 0 && curN * i >= m - r + l && curN * i <= m + r - l)
        {
            int b = r, c = m - curN * i + l;

            printf("%d %d %d\n", i, b, c);
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
