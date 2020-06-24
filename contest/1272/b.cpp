// https://codeforces.com/contest/1272/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        map<char, int> mp;

        for (auto ch : s)
            mp[ch]++;

        bool notX = min(mp['L'], mp['R']) == 0;
        bool notY = min(mp['U'], mp['D']) == 0;

        if (notX && !notY)
            cout << 2 << endl
                 << "UD\n";
        else if (!notX && notY)
            cout << 2 << endl
                 << "LR\n";
        else if (notX && notY)
            cout << 0 << endl
                 << "\n";
        else
            cout << min(mp['L'], mp['R']) * 2 + min(mp['U'], mp['D']) * 2 << endl
                 << string(min(mp['L'], mp['R']), 'L')
                 << string(min(mp['U'], mp['D']), 'U')
                 << string(min(mp['L'], mp['R']), 'R')
                 << string(min(mp['U'], mp['D']), 'D') << endl;
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
