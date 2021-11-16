// https://codeforces.com/contest/1598/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string v[2];
    cin >> v[0] >> v[1];
    bool success = true;
    for (int i = 0; i < n; i++)
        if (v[0][i] == '1' && v[1][i] == '1')
            success = false;
    cout << (success ? "YES" : "NO") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
