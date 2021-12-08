// https://codeforces.com/contest/1574/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll v[3], m;
    cin >> v[0] >> v[1] >> v[2] >> m;
    sort(v, v + 3);
    ll mn = max(0ll, v[2] - (v[1] + v[0] + 1));
    ll mx = v[0] - 1 + v[1] - 1 + v[2] - 1;
    cout << (m >= mn && m <= mx ? "Yes" : "No") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
