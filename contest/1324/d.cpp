// https://codeforces.com/contest/1324/problem/D
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
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> c(n);
    for (int i = 0; i < n; ++i)
        c[i] = a[i] - b[i];

    sort(c.begin(), c.end());

    ll ans = 0;
    for (int i = 0; i < n; ++i)
        if (c[i] > 0)
        {
            int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
            ans += i - pos;
        }

    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("d-input-1.txt", "r", stdin);
    //freopen("d-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
