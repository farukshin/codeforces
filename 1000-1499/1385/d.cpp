// https://codeforces.com/contest/1385/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int comp(const string &s, char c)
{
    if (s.length() == 1)
        return (s[0] == c ? 0 : 1);

    int mid = s.length() / 2;

    int cntl = comp(string(s.begin(), s.begin() + mid), c + 1);
    cntl += s.length() / 2 - count(s.begin() + mid, s.end(), c);

    int cntr = comp(string(s.begin() + mid, s.end()), c + 1);
    cntr += s.length() / 2 - count(s.begin(), s.begin() + mid, c);

    return min(cntl, cntr);
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    cout << comp(s, 'a') << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("d-input-1.txt", "r", stdin);
    //freopen("d-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
