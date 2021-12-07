// https://codeforces.com/contest/1504/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
        cnt1 += (s[i] == '1');
    if (cnt1 & 1 || s[0] == '0' || s[n - 1] == '0')
    {
        cout << "NO\n";
        return;
    }
    string a = "", b = "";
    int k = 0;
    bool flip = false;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
        {
            a.push_back((2 * k < cnt1 ? '(' : ')'));
            b.push_back(a.back());
            k++;
        }
        else
        {
            a.push_back(flip ? '(' : ')');
            b.push_back(flip ? ')' : '(');
            flip = !flip;
        }
    cout << "YES\n"
         << a << "\n"
         << b << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
