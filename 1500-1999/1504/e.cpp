// https://codeforces.com/contest/1504/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), c(n);
    ll cost = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> c[i], cost += c[i], c[i] += a[i];
    sort(begin(a), end(a));
    sort(begin(c), end(c));
    for (int i = 0; i < n - 1; i++)
        if (c[i] < a[i + 1])
            cost += a[i + 1] - c[i];
    cout << cost;
}

int main()
{
    solve();
    return 0;
}
