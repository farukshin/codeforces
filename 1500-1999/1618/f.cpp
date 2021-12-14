// hhttps://codeforces.com/contest/1618/problem/F
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string binstr(ll n)
{
    string s = "";
    while (n)
    {
        if (n & 1)
            s = "1" + s;
        else
            s = "0" + s;
        n = n >> 1;
    }
    return s;
}

string next(string s, char ch)
{
    s += ch;
    reverse(begin(s), end(s));
    int pos = 0;
    while (s[pos] == '0')
        pos++;
    return s.substr(pos);
}

void solve()
{
    ll x, y;
    cin >> x >> y;
    string a = binstr(x), b = binstr(y);
    set<string> used;
    queue<string> q;
    q.push(a);
    int tic = 0;
    int MAXTIC = 1e4 + 5;

    while (!q.empty())
    {
        tic++;
        if (tic > MAXTIC)
            break;
        string cur = q.front();
        q.pop();

        if (cur == b)
        {
            cout << "YES\n";
            return;
        }

        auto aa = next(cur, '1');
        if (!used.count(aa))
            used.insert(aa), q.push(aa);

        auto bb = next(cur, '0');
        if (!used.count(bb))
            used.insert(bb), q.push(bb);
    }
    cout << "NO\n";
}

int main()
{
    solve();
    return 0;
}
