// https://codeforces.com/contest/1608/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    int cntmx = (n - 2) / 2;
    bool success = abs(a - b) <= 1 && (a == b && a <= cntmx || n % 2 == 1 && a != b && min(a, b) <= cntmx || n % 2 == 0 && a != b && min(a, b) <= cntmx - 1);
    if (!success)
    {
        cout << "-1\n";
        return;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    int pos = 1;
    if (b > a)
        swap(v[0], v[1]), pos = 2;
    if (a > b)
        swap(v[n - 1], v[n - 2]);

    for (int i = 0; i < min(a, b); i++)
        swap(v[pos], v[pos + 1]), pos += 2;

    for (auto d : v)
        cout << d << " ";
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
