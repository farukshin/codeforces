// https://codeforces.com/contest/1554/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, v[200005], ans = LLONG_MIN;
    cin >> n;

    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i != 0)
            ans = max(ans, v[i] * v[i - 1]);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
