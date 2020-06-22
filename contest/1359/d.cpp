//https://codeforces.com/contest/1359/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define forn(i, n) for (int i = 0; i < int(n); i++)

typedef long long ll;
typedef long double ld;

const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;

    for (int mx = 0; mx < 31; mx++)
    {
        ll cur = 0, best = 0;
        for (int i = 0; i < n; i++)
        {
            int val = (a[i] > mx ? -INF : a[i]);
            cur += val;
            best = min(best, cur);
            ans = max(ans, (cur - best) - mx);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
