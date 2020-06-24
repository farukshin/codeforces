// https://codeforces.com/contest/1272/problem/C
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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    set<char> chars;

    for (int i = 0; i < k; i++)
    {
        char ch;
        cin >> ch;
        chars.insert(ch);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && chars.count(s[j]))
            j++;

        ans += 1.0 * (j - i) * (j - i + 1) / 2;
        i = j;
    }
    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
