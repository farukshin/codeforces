// https://codeforces.com/contest/1000/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 2), suf(n + 2, 0), sum(n + 2, 0);
    v[0] = 0, v[n + 1] = m;
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    sum[0] = 0;
    for(int i = 1; i <= n + 1; i++)
        if(i & 1) sum[i] = sum[i - 1] + (v[i] - v[i - 1]);
        else sum[i] = sum[i - 1];

    suf[n + 1] = 0;
    for(int i = n; i >= 0; i--)
        if(i & 1) suf[i] = suf[i + 1] + (v[i + 1] - v[i]);
        else suf[i] = suf[i + 1];


    int ans = sum[n + 1];
    for(int i = 0; i < n + 1; i++)
    {
        if(v[i + 1] - v[i] < 2)
            continue;

        int cur = (i & 1 ? (v[i + 1] - v[i] - 1) : 1);
        ans = max(ans, sum[i] + cur + suf[i + 1]);
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}
