// https://codeforces.com/contest/1569/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, cnt2 = 0;
    string s;
    cin >> n >> s;

    map<int, int> nx;
    vector<int> v;
    for (int i = 0; i < n; i++)
        if (s[i] == '2')
        {
            if (!v.empty())
                nx[v.back()] = i;
            v.push_back(i);
        }
    if (int(v.size()) > 1)
        nx[v.back()] = v[0];

    cnt2 = v.size();
    if (cnt2 == 1 || cnt2 == 2)
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    vector<string> ans(n, string(n, '='));
    for (int i = 0; i < n; i++)
        ans[i][i] = 'X';

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (s[i] == '2' && nx[i] == j)
                ans[i][j] = '+', ans[j][i] = '-';

    for (auto d : ans)
        cout << d << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
