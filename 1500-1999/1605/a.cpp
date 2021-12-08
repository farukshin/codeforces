// https://codeforces.com/contest/1605/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + c - 2 * b) % 3 == 0 ? 0 : 1) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
