// https://codeforces.com/contest/1604/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, cur, pre;
    cin >> n;
    bool fl = false;
    cin >> pre;
    for (int i = 1; i < n; i++)
    {
        cin >> cur;
        if (pre >= cur)
            fl = true;
        pre = cur;
    }
    cout << (n % 2 == 0 || fl ? "Yes" : "No") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
