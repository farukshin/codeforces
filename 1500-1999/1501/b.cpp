// https://codeforces.com/contest/1501/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans(n, 0);
    for (auto &d : v)
        cin >> d;

    int cur = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i])
            cur = max(cur, v[i]);
        if (cur > 0)
            ans[i] = 1, cur--;
    }

    for (auto d : ans)
        cout << d << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
