// https://codeforces.com/contest/1512/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    bool fl = (a == b && b == c && a == c);
    if (!fl && b == c)
        cout << 1 << "\n";
    else if (!fl && a == c)
        cout << 2 << "\n";
    else if (!fl && a == b)
        cout << 3 << "\n";

    for (int i = 3; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur != a && fl)
            cout << i + 1 << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
