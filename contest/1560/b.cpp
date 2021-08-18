// https://codeforces.com/contest/1560/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if(a > b) swap(a, b);
    ll d = 2 * (b - a), ans;
    if(c > d || a > d || b > d) ans = -1;
    else ans = (c + d / 2) % d;
    cout << (ans == 0 ? d : ans) << "\n";
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
