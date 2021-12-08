// https://codeforces.com/contest/1574/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < k; i++)
            cout << '(';
        for (int i = 0; i < k; i++)
            cout << ')';
        for (int i = k; i < n; i++)
            cout << '(';
        for (int i = k; i < n; i++)
            cout << ')';
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
