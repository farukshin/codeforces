// https://codeforces.com/contest/1511/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "1" << string(a - c, '0') << string(c - 1, '0') << " 1" << string(b - c, '1') << string(c - 1, '0') << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
