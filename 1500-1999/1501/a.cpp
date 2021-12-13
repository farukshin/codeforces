// https://codeforces.com/contest/1501/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0), b(n + 1, 0), t(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= n; i++)
        cin >> t[i];

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += a[i] - b[i - 1] + t[i];
        if (i == n)
            break;
        if (b[i] - ans >= ceil((b[i] - a[i]) / 2.0))
            ans = b[i];
        else
            ans += ceil((b[i] - a[i]) / 2.0);
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
