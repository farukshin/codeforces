// https://codeforces.com/contest/1296/problem/B
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
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int ans = 0;
        while (s >= 10)
        {
            int rashod = (s / 10) * 10;
            ans += rashod;
            s += rashod / 10 - rashod;
        }
        ans += s;
        cout << ans << endl;
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
