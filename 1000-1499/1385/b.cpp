// https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int a[n + 1] = {0};

    for (int i = 1; i <= 2 * n; i++)
    {
        int cur;
        cin >> cur;
        if (!a[cur])
        {
            a[cur]++;
            cout << cur << " ";
        }
    }
    cout << endl;
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
