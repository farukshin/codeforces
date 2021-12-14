// https://codeforces.com/contest/1618/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    vector<int> v(7);
    for (auto &d : v)
        cin >> d;
    cout << v[0] << " " << v[1] << " " << v[6] - v[0] - v[1] << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
