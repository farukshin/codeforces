// https://codeforces.com/contest/1294/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;

        sort(v.begin(), v.end());

        bool success = true;
        pair<int, int> cur = {0, 0};
        string ans = "";

        for (int i = 0; i < n && success; i++)
        {
            int r = v[i].first - cur.first;
            int u = v[i].second - cur.second;
            if (r < 0 || u < 0)
                success = false;
            else
            {
                ans += string(r, 'R');
                ans += string(u, 'U');
                cur = v[i];
            }
        }

        cout << (success ? "YES\n" + ans : "NO") << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
