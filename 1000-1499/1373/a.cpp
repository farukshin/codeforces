// https://codeforces.com/contest/1373/problem/A
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
    int mod = 1e9;

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ll opt = 1.0 * c / b;
        int ans1 = -1, ans2 = -1;

        if (a <= opt)
            ans1 = (b - 1);
        else
        {
            if (a < c)
                ans1 = 1, ans2 = b;
            else
                ans2 = b;
        }
        printf("%d %d\n", ans1, ans2);
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
