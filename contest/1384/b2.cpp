// https://codeforces.com/contest/1384/problem/B2
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, k, l;
    cin >> n >> k >> l;

    ll x = 0, pz = k, z;

    for (int i = 0; i < n; i++)
    {

        ll d;
        cin >> d;
        z = l - d;

        if (z < 0)
        {
            cout << "No" << endl;
            return;
        }
        if (z >= k)
            x = 0;
        else if (x < k)
            x = max(x + 1, k - z);
        else if (x >= k)
        {
            x++;
            if (x - k > z)
            {
                cout << "No" << endl;
                return;
            }
        }

        pz = max(z, k);
    }
    cout << "Yes" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b2-input-1.txt", "r", stdin);
    //freopen("b2-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
