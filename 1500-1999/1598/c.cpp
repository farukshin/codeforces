// https://codeforces.com/contest/1598/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    ll sum = 0;
    for (auto &d : v)
    {
        cin >> d;
        mp[d]++;
        sum += d;
    }

    if ((sum * 2) % n != 0)
    {
        cout << "0\n";
        return;
    }

    ll p = sum * 2 / n;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        int b = p - a;
        if (mp.count(b))
            ans += mp[b];
        if (a == b)
            ans -= 1;
    }
    cout << ans / 2 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
