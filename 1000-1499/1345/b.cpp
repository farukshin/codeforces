// https://codeforces.com/contest/1345/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n > 1)
    {
        int i = 1;
        while (i * (3 * i + 1) / 2 <= n)
            i++;
        i--;
        n -= (i * (3 * i + 1)) / 2;
        ans++;
    }
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
