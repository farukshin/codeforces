// https://codeforces.com/contest/1004/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, d, ans = 2;
    cin >> n >> d;
    ll v[n];

    for(auto &c : v)
        cin >> c;

    for(int i = 0; i < n - 1; i++)
        if(v[i + 1] - v[i] == 2 * d) ans++;
        else if(v[i + 1] - v[i] > 2 * d) ans += 2;

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}
