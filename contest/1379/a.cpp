// https://codeforces.com/contest/1379/problem/A
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

string replaceStr(char fCh, char iCh, string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] == fCh)
            s[i] = iCh;

    return s;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    string pattern = "abacaba";
    int curPattern = 0;

    int count = 0;

    for (int i = 0; i <= n - pattern.length(); i++)
        if (s.substr(i, pattern.length()) == pattern)
            count++;

    if (count >= 1)
    {
        if (count > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << replaceStr('?', 'd', s) << endl;
        return;
    }

    bool fl = false;

    for (int i = 0; i <= n - pattern.length(); i++)
    {
        bool succesSearch = true;
        curPattern = 0;
        while (succesSearch && curPattern != pattern.length())
            if (s[i + curPattern] == pattern[curPattern] || s[i + curPattern] == '?')
                curPattern++;
            else
                succesSearch = false;

        if (succesSearch)
        {
            fl = true;
            string ans = (i > pattern.length() ? s.substr(0, i - pattern.length()) : "") + pattern + (n - pattern.length() > i ? s.substr(i + pattern.length(), n - 1) : "");
            cout << "YES" << endl
                 << replaceStr('?', 'd', ans) << endl;
            break;
        }
    }
    if (!fl)
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
