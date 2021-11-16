// https://codeforces.com/contest/1598/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int v[n][5];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> v[i][j];

    for (int a = 0; a < 4; a++)
        for (int b = a + 1; b < 5; b++)
        {
            int cnt0 = 0, cnta = 0, cntb = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i][a] == 0 && v[i][b] == 0)
                    cnt0++;
                else if (v[i][a] == 1 && v[i][b] == 0)
                    cnta++;
                else if (v[i][a] == 0 && v[i][b] == 1)
                    cntb++;
            }

            if (cnt0 != 0 || cnta > (n / 2) || cntb > (n / 2))
                continue;

            cout << "YES\n";
            return;
        }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
