// https://codeforces.com/contest/998/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(begin(v), end(v));
    if (n == 1 || n == 2 && v[0].first == v[1].first)
        cout << "-1\n";
    else
        cout << 1 << "\n"
             << v[0].second + 1 << "\n";
}

int main()
{
    solve();
    return 0;
}
