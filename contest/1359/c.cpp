//https://codeforces.com/contest/1359/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

double h, c, t;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> h >> c >> t;
        if (h + c - 2 * t >= 0)
            cout << 2 << endl;
        else
        {
            int a = h - t;
            int b = 2 * t - c - h;
            int k = 2 * (a / b) + 1;
            ll val1 = abs(k / 2 * 1ll * c + (k + 1) / 2 * 1ll * h - t * 1ll * k);
            ll val2 = abs((k + 2) / 2 * 1ll * c + (k + 3) / 2 * 1ll * h - t * 1ll * (k + 2));
            cout << (val1 * (k + 2) <= val2 * k ? k : k + 2) << endl;
        }
    }
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
