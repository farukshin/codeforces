// https://codeforces.com/contest/998/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;
    int cnt0 = 0;
    bool is0 = false;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch == '0' && !is0)
            cnt0++, is0 = true;
        else if (ch == '1' && is0)
            is0 = false;
    }
    ll ans = (cnt0 == 0 ? 0 : 1ll * (cnt0 - 1) * min(x, y) + y);
    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}
