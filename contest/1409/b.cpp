// https://codeforces.com/contest/1409/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    if (max(a - n, x) > max(b - n, y))
        swap(a, b), swap(x, y);

    ll d = min(n, a - x);
    a -= d, n -= d;

    if (n > 0)
        b -= min(n, b - y);



    ll ans = a * b;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
