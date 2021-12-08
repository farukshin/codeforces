// https://codeforces.com/contest/1345/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;

    const int MAX = 1e9;
    set<int> ans;

    for (ll i = 0; i < n; i++)
    {
        ll cur;
        cin >> cur;
        ans.insert((cur + i + MAX * n) % n);
    }

    cout << (ans.size() == n ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
