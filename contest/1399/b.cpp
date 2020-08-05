// https://codeforces.com/contest/1399/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    const int MAX = 1e9 + 5;
    int a[n], b[n], minA = MAX, minB = MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < minA)
            minA = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] < minB)
            minB = b[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int dA = a[i] - minA, dB = b[i] - minB;
        int d = min(dA, dB);
        ans += dA - d + dB - d + d;
    }
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
    while (t--)
        solve();

    return 0;
}
