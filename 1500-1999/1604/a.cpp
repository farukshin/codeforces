// https://codeforces.com/contest/1604/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int cur;
        cin >> cur;
        if ((i + ans) < cur)
            ans += cur - (i + ans);
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
