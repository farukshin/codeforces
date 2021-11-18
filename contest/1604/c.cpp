// https://codeforces.com/contest/1604/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXARR = 100005;
int n, v[MAXARR], pos[MAXARR];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pos[i] = 1;
        while (v[i] % (pos[i] + 1) == 0)
            pos[i]++;
    }
    bool fl = true;
    for (int i = 1; i <= n; i++)
        fl &= (pos[i] <= i);
    cout << (fl ? "Yes" : "No") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
