// https://codeforces.com/contest/1512/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkrev(string s)
{
    string s2 = s;
    reverse(begin(s2), end(s2));
    //cout<<"s="<<s<<" s2="<<s2<<"\n";
    return s == s2;
}

void solve()
{
    int a, b, cnt0 = 0, cnt1 = 0, cntv = 0;
    string s;
    cin >> a >> b >> s;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?' && s[n - i - 1] != '?')
            s[i] = s[n - i - 1];
        else if (s[n - i - 1] == '?' && s[i] != '?')
            s[n - i - 1] = s[i];
        cnt0 += (s[i] == '0');
        cnt1 += (s[i] == '1');
        cntv += (s[i] == '?');
    }

    if (n & 1 && s[n / 2] == '?' && a & 1)
        s[n / 2] = '0', cnt0++, cntv--;
    else if (n & 1 && s[n / 2] == '?' && b & 1)
        s[n / 2] = '1', cnt1++, cntv--;
    else if (n & 1 && s[n / 2] == '?')
    {
        cout << -1 << "\n";
        return;
    }

    if (n != (a + b) || cnt0 > a || cnt1 > b || a & 1 && b & 1 || n % 2 == 0 && (a & 1 || b & 1))
    {
        cout << -1 << "\n";
        return;
    }

    int ost0 = a - cnt0;
    int ost1 = b - cnt1;

    for (int i = 0; i < n; i++)
        if (s[i] == '?' && ost0 > 1)
            s[i] = s[n - i - 1] = '0', cntv -= 2, cnt0 += 2, ost0 -= 2;
        else if (s[i] == '?' && ost1 > 1)
            s[i] = s[n - i - 1] = '1', cntv -= 2, cnt1 += 2, ost1 -= 2;

    if (cntv == 0 && checkrev(s))
        cout << s << "\n";
    else
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
