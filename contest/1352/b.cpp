// https://codeforces.com/contest/1352/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    int n1 = n - (k - 1);
    if (n1 > 0 && n1 % 2 == 1) {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; ++i)
            cout << "1 ";
        cout << n1 << endl;
        return;
    }
    int n2 = n - 2 * (k - 1);
    if (n2 > 0 && n2 % 2 == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; ++i)
            cout << "2 ";
        cout << n2 << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    //solve();
    int t; cin >> t; while (t--) solve();

    return 0;
}
