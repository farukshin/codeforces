// https://codeforces.com/contest/1512/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n + 2);
    for (auto &d : v)
        cin >> d;
    sort(begin(v), end(v));
    ll sm = 0;
    for (int i = 0; i < n + 2; i++)
        sm += v[i];

    for (int i = 0; i < n + 2; i++)
    {
        int pos = (i == n + 1 ? n : n + 1);
        if (sm - v[i] == (v[pos] << 1))
        {
            for (int j = 0; j < n + 1; j++)
                if (j != i && j != pos)
                    cout << v[j] << " ";
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
