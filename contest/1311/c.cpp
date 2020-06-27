// https://codeforces.com/contest/1311/problem/C
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
        int n, m;
        string s;
        cin >> n >> m >> s;
        vector<int> sum(n);
        for (int i = 0; i < m; i++)
        {
            int p;
            cin >> p;
            sum[p - 1]++;
        }
        for (int i = n - 1; i > 0; i--)
            sum[i - 1] += sum[i];

        vector<int> ans(26);
        for (int i = 0; i < n; i++)
        {
            ans[s[i] - 'a'] += sum[i];
            ans[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
            cout << ans[i] << (i == 25 ? "\n" : " ");
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
