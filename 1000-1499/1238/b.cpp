// https://codeforces.com/contest/1238/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, r;
    cin >> n >> r;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    n = unique(a, a + n) - a;

    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
        ans += (a[i] > ans * r ? 1 : 0);

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
