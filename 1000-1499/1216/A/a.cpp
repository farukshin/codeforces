// https://codeforces.com/contest/1216/problem/A
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
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < n / 2; i++)
        if (s[2 * i + 1] == s[2 * i])
        {
            ans++;
            s[2 * i] = (s[2 * i] == 'a' ? 'b' : 'a');
        }
    cout << ans << endl
         << s << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
