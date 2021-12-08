// https://codeforces.com/contest/1326/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
        cout << -1 << "\n";
    else
        cout << string(n - 1, '9') << "8\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
