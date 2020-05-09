// https://codeforces.com/contest/1324/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n, t, cur;
    cin >> n;
    while (n > 0)
    {
        cin >> t;
        int ost = 0;
        for (int i = 0; i < t; i++)
        {
            cin >> cur;
            ost += cur % 2;
        }
        cout << (ost == t || ost == 0 ? "YES" : "NO") << endl;
        n--;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}