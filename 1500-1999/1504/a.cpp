// https://codeforces.com/contest/1504/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(string s)
{
    string cur = s;
    reverse(begin(cur), end(cur));
    return cur != s;
}

void solve()
{
    string s, cur;
    cin >> s;
    if (check("a" + s))
        cout << "YES\na" << s << "\n";
    else if (check(s + "a"))
        cout << "YES\n"
             << s << "a\n";
    else
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
