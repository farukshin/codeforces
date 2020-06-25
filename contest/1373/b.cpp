// https://codeforces.com/contest/1373/problem/B
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

bool play1Result(string s, bool res = false, int player)
{
    if (s == "")
        return false;

    bool cur = false;
    for (int i = 0; i < s.size() - 2; i++)
        if (s[i] != s[i + 1])
            cur = cur || play1Result(s, false);

    return cur;
}

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << (play1Result(s, false, 1) ? "DA" : "NET") << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
