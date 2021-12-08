// https://codeforces.com/contest/1504/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    vector<int> sum(n, 0);
    for (int i = 0; i < n; i++)
        if (a[i] == '0')
            sum[i] = (i == 0 ? 0 : sum[i - 1]) - 1;
        else
            sum[i] = (i == 0 ? 0 : sum[i - 1]) + 1;

    bool revers = false, success = true;
    for (int i = n - 1; i >= 0; i--)
    {
        if (revers)
        {
            if (a[i] == b[i])
            {
                if (sum[i] == 0)
                    revers = false;
                else
                    success = false;
            }
        }
        else
        {
            if (a[i] != b[i])
            {
                if (sum[i] == 0)
                    revers = true;
                else
                    success = false;
            }
        }
    }
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
