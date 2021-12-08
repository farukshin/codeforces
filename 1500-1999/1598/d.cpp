// https://codeforces.com/contest/1598/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), cnta(n + 1, 0), cntb(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i], cnta[a[i]]++, cntb[b[i]]++;

    ll ans = 1ll * n * (n - 1) * (n - 2) / 6;
    for (int i = 0; i < n; i++)
        ans -= 1ll * (cnta[a[i]] - 1) * (cntb[b[i]] - 1);
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
