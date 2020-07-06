// https://codeforces.com/contest/1343/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n /= 2;
        if (n % 2 == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
                cout << i * 2 << " ";

            for (int i = 1; i < n; i++)
                cout << i * 2 - 1 << " ";

            cout << 3 * n - 1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    solve();
    return 0;
}
