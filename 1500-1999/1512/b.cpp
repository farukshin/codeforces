// https://codeforces.com/contest/1512/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 0; j < n; j++)
            if (v[i][j] == '*')
                ans.push_back({i, j});
    }

    if (ans[0].first == ans[1].first)
    {
        int cur = (ans[0].first == 0 ? 1 : 0);
        v[cur][ans[0].second] = '*';
        v[cur][ans[1].second] = '*';
    }
    else if (ans[0].second == ans[1].second)
    {
        int cur = (ans[0].second == 0 ? 1 : 0);
        v[ans[0].first][cur] = '*';
        v[ans[1].first][cur] = '*';
    }
    else
    {
        v[ans[0].first][ans[1].second] = '*';
        v[ans[1].first][ans[0].second] = '*';
    }
    for (auto &s : v)
        cout << s << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
