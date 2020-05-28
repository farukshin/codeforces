//https://codeforces.com/contest/1359/problem/A
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
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        int maxX = 0, minY1 = 0, minY2 = 0;
        cin >> n >> m >> k;
        maxX = min(m, n / k);
        minY1 = min(m - maxX, n / k);
        minY2 = ceil(1.0 * (m - maxX) / (k - 1));
        cout << max(maxX - minY1, maxX - minY2) << endl;
    }
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
