// https://codeforces.com/contest/1505/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    char target = '*';

    vector<string> v(n);
    for (auto &s : v)
        cin >> s;
    int ans = (v[0][0] == target);

    int a = 0, b = 0;
    while (a < n - 1 || b < m - 1)
    {
        if (b == m - 1 || (a < (n - 1) && v[a + 1][b] == target))
            a++;
        else
            b++;
        ans += (v[a][b] == target);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
