#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const ll MAX = 1e-9;

ll calcB(ll x, ll y, ll t)
{
    return t / min(x, y) + (t - min(x, y)) / y;
}

void solve()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll l = 0, r = MAX, cur = 0;
        cin >> cur;

        while (l + 1 < r)
        {
            ll mid = (l + r) / 2;
            if (calcB(x, y, mid) >= cur)
                r = mid;
            else
                l = mid;
        }
        cout << r << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}