// https://codeforces.com/contest/1248/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
        if (i < n / 2)
            x += a[i];
        else
            y += a[i];

    cout << x * x + y * y << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
