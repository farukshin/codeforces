// https://codeforces.com/contest/1409/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int dif = y - x;
    for (int d = 1; d <= d; ++d) {
        if (dif % d)
            continue;

        if (dif / d + 1 > n)
            continue;

        int count = min(n - 1, (y - 1) / d);
        int arr0 = y - count * d;

        for (int i = 0; i < n; ++i) {
            cout << (arr0 + i * d) << " ";
        }
        cout << endl;
        break;
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif

    //solve();
    int t; cin >> t; while (t--) solve();

    return 0;
}
