// https://codeforces.com/contest/1591/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;
    int ans = 0, mx = v[n - 1];
    for (int i = n - 1; i >= 0; i--)
        if (v[i] > mx)
            ans++, mx = v[i];
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
