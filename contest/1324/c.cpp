// https://codeforces.com/contest/1324/problem/C

#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < int(s.size()); ++i)
            if (s[i] == 'R')
                v.push_back(i + 1);
        v.push_back(s.size() + 1);

        int ans = 0;
        for (int i = 0; i < int(v.size()) - 1; ++i)
            ans = max(ans, v[i + 1] - v[i]);
        cout << ans << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}