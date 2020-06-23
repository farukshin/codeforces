// https://codeforces.com/contest/1249/problem/B1
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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> v[i];

        for (int i = 1; i <= n; i++)
        {
            int ans = 0;
            int cur = i;
            do
            {
                ans++;
                cur = v[cur];
            } while (cur != i);
            cout << ans << (i == n ? "\n" : " ");
        }
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("b1-input-1.txt", "r", stdin);
    //freopen("b1-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
