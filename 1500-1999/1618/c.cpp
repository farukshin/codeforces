// https://codeforces.com/contest/1618/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n), g(2, 0);
    bool success = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        g[i % 2] = __gcd(g[i % 2], v[i]);
    }

    vector<int> a(n, -1), b(n, -1);
    bool fl1 = true, fl2 = true;
    for (int i = 0; i < n; i++)
    {
        a[i] = ((v[i] % g[0]) == 0 ? 0 : 1);
        b[i] = ((v[i] % g[1]) == 0 ? 0 : 1);
        if (i)
        {
            fl1 &= (a[i] != a[i - 1]);
            fl2 &= (b[i] != b[i - 1]);
        }
    }
    if (!fl1 && !fl2)
        cout << "0\n";
    else if (fl1)
        cout << g[0] << "\n";
    else if (fl2)
        cout << g[1] << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
