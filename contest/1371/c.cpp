// https://codeforces.com/contest/1371/problem/C
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
        ll a, b, n, m;
        cin >> a >> b >> n >> m;

        bool success = false;

        if (m <= min(a, b) && n + m <= a + b)
            success = true;

        cout << (success ? "Yes" : "No") << endl;
    }
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
