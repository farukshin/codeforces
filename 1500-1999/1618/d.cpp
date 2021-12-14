// https://codeforces.com/contest/1618/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;
    sort(rbegin(v), rend(v));
    for (int i = 0; i < k; i++)
        v[i + k] /= v[i], v[i] = 0;
    cout << accumulate(begin(v), end(v), 0) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
