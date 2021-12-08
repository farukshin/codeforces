// https://codeforces.com/contest/1376/problem/A1
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<ll> v;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll cur;
        cin >> cur;
        v.push_back(cur);
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
        cout << v[i] << (i == n - 1 ? "\n" : " ");
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("a1-input-1.txt", "r", stdin);
    freopen("a1-output-2.txt", "w", stdout);
#endif
    solve();
    return 0;
}
