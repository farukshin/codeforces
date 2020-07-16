// https://codeforces.com/contest/1248/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    ll p0 = 0, p1 = 0;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur % 2 == 0)
            p0++;
        else
            p1++;
    }

    int m;
    cin >> m;

    ll q0 = 0, q1 = 0;
    for (int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        if (cur % 2 == 0)
            q0++;
        else
            q1++;
    }

    cout << 1ll * p0 * q0 + p1 * q1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
