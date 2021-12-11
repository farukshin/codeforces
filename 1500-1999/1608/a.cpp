// https://codeforces.com/contest/1512/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, cur = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cur = cur + 1;
        cout << cur << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
