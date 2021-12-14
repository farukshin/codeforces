// https://codeforces.com/contest/998/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    bitset<1005> dp[21];
    dp[0][0] = 1;
    for (int i = 1; i <= min(n, 20); i++)
        dp[i] = (dp[i - 1] << 1 | dp[i - 1] << 5 | dp[i - 1] << 10 | dp[i - 1] << 50);
    ll ans = (n <= 20 ? dp[n].count() : 49ll * (n - 20) + dp[20].count());
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
