// https://codeforces.com/contest/560/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a[6];
    for (int i = 0; i < 6; i++)
        cin >> a[i];

    int ans = (a[0] + a[1] + a[2]) * (a[0] + a[1] + a[2]) - a[0] * a[0] - a[2] * a[2] - a[4] * a[4];
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
