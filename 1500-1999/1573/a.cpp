// https://codeforces.com/contest/1573/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    ll ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if(ch == '0' || !(ch >= '0' && ch <= '9')) continue;
        else if(i == s.size() - 1) ans += (ch - '0');
        else ans += (ch - '0') + 1;
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
