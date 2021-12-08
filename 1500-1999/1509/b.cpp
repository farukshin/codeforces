// https://codeforces.com/contest/1509/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool success = true;

    {
        map<char, int> mp;
        for (auto ch : s)
            mp[ch]++;
        if (mp['T'] != mp['M'] * 2)
        {
            cout << "NO\n";
            return;
        }
    }

    int cntt = 0;
    for (int i = 0; i < n && success; i++)
    {
        if (s[i] == 'T')
            cntt++;
        else if (s[i] == 'M')
            cntt--;
        if (cntt < 0)
            success = false;
    }
    cntt = 0;
    for (int i = n - 1; i >= 0 && success; i--)
    {
        if (s[i] == 'T')
            cntt++;
        else if (s[i] == 'M')
            cntt--;
        if (cntt < 0)
            success = false;
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
