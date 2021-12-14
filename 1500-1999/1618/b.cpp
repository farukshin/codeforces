// https://codeforces.com/contest/1618/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n - 2);
    for (auto &st : v)
        cin >> st;
    string ans = "";
    ans += v[0][0];
    bool fl = false;
    for (int i = 0; i < n - 3; i++)
        if (v[i][1] == v[i + 1][0])
            ans += v[i][1];
        else if (v[i][1] != v[i + 1][0])
            ans += v[i][1], ans += v[i + 1][0], fl = true;
    ans += v[n - 3][1];

    if (!fl)
    {
        int p = ans.size() - 1;
        ans += ans[p];
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
