// https://codeforces.com/contest/560/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void check(bool &ans, int a, int b, int x, int y)
{
    if (a >= x && b >= y || a >= y && b >= x)
        ans = true;
}

void solve()
{
    int a, b, x, y, k, l;
    cin >> a >> b >> x >> y >> k >> l;
    bool ans = false;
    check(ans, a, b, x + k, max(y, l));
    check(ans, a, b, x + l, max(y, k));
    check(ans, a, b, y + k, max(x, l));
    check(ans, a, b, y + l, max(x, k));

    cout << (ans ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
