// https://codeforces.com/contest/1312/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &d : v)
        cin >> d;

    vector<int> cnt(60, 0);

    for (auto d : v)
    {
        int pw = 0;
        while (d)
        {
            cnt[pw++] += d % k;
            d /= k;
        }
    }
    if (*max_element(begin(cnt), end(cnt)) <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
