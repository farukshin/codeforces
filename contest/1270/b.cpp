// https://codeforces.com/contest/1270/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int pre;
    cin >> pre;

    bool fl = false;
    for (int i = 2; i <= n; i++)
    {
        int cur;
        cin >> cur;
        if (!fl && abs(cur - pre) >= 2)
        {
            cout << "YES" << endl;
            cout << i - 1 << " " << i << endl;
            fl = true;
        }
        pre = cur;
    }

    if (!fl)
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
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
