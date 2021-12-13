// https://codeforces.com/contest/1591/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, ans = 1;
    cin >> n;
    vector<int> v(n);
    bool success = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (!success)
            continue;
        else if (i == 0)
            ans += (v[i] == 1);
        else if (v[i] == 0 && v[i - 1] == 0)
        {
            ans = -1;
            success = false;
        }
        else if (v[i] == 1 && v[i - 1] == 1)
            ans += 5;
        else if (v[i] == 1)
            ans += 1;
    }
    cout << (success ? ans : -1) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
