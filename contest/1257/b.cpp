// https://codeforces.com/contest/1257/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int x, y;
    cin >> x >> y;
    bool ans = true;

    if (x == y)
        ans = true;
    else if (x == 1 && y != 1 || (x == 2 || x == 3) && y > 3)
        ans = false;

    cout << (ans ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
