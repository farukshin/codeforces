// https://codeforces.com/contest/1509/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXARR = 2e3 + 3;
ll v[MAXARR], dp[MAXARR][MAXARR];

ll calc(int l, int r)
{
    if (dp[l][r] != -1)
        return dp[l][r];
    if (l == r)
        return 0;

    return dp[l][r] = v[r] - v[l] + min(calc(l + 1, r), calc(l, r - 1));
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    memset(dp, -1, sizeof dp);
    cout << calc(0, n - 1);
}

int main()
{
    solve();
    return 0;
}
