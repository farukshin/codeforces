// https://codeforces.com/contest/1379/problem/A
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

int countPattern(const string &s, const string &pattern)
{
    int count = 0;

    for (int i = 0; i <= s.length() - pattern.length(); i++)
        if (s.substr(i, pattern.length()) == pattern)
            count++;

    return count;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    string pattern = "abacaba";
    int curPattern = 0;

    int count = countPattern(s, pattern);

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
        string cur = s;
        bool succesRepl = true;
        for (int j = 0; j < pattern.length(); j++)
            if (s[i + j] == pattern[j] || s[i + j] == '?')
                cur[i + j] = pattern[j];
            else
                succesRepl = false;

        if (succesRepl && countPattern(cur, pattern) == 1)
        {
            fl = true;
            string ans = replaceStr('?', 'd', cur);
            cout << "YES" << endl
                 << ans << endl;
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
