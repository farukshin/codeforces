// https://codeforces.com/contest/1294/problem/A
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
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int maxK = max(max(a, b), max(b, c));
        int need = maxK - a + maxK - b + maxK - c;
        cout << (need <= n && (n - need) % 3 == 0 ? "YES" : "NO") << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
