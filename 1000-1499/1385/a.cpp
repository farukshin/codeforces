// https://codeforces.com/contest/1385/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);

    if (a[1] != a[2])
        cout << "NO" << endl;
    else
        cout << "YES" << endl
             << a[0] << " " << a[0] << " " << a[2] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
