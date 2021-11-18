// https://codeforces.com/contest/1605/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = -1;
    for (int i = 0; i < n - 6; i++)
        if (s.substr(i, 7) == "abbacca" || s.substr(i, 7) == "accabba")
            ans = 7;
    for (int i = 0; i < n - 3; i++)
        if (s.substr(i, 4) == "abca" || s.substr(i, 4) == "acba")
            ans = 4;
    for (int i = 0; i < n - 2; i++)
        if (s.substr(i, 3) == "aba" || s.substr(i, 3) == "aca")
            ans = 3;
    for (int i = 0; i < n - 1; i++)
        if (s.substr(i, 2) == "aa")
            ans = 2;
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
