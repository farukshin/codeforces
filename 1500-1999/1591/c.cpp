// https://codeforces.com/contest/1591/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1, v2;

    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur < 0)
            v2.push_back(-cur);
        else if (cur > 0)
            v1.push_back(cur);
    }
    int n1 = v1.size();
    int n2 = v2.size();
    sort(begin(v1), end(v1));
    sort(begin(v2), end(v2));
    ll ans = 0;
    for (int i = n1 - 1; i >= 0; i -= k)
        ans += v1[i] * 2;
    for (int i = n2 - 1; i >= 0; i -= k)
        ans += v2[i] * 2;

    int mx = 0;
    if (n1 > 0)
        mx = max(mx, v1[n1 - 1]);
    if (n2 > 0)
        mx = max(mx, v2[n2 - 1]);
    ans -= mx;
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
