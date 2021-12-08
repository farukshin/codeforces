//https://codeforces.com/contest/1364/problem/A
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
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, sum = 0, l = -1, r;
        cin >> n >> x;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a % x)
            {
                if (l == -1)
                    l = i;
                r = i;
            }
            sum += a;
        }

        if (sum % x)
            printf("%d\n", n);
        else if (l == -1)
            printf("-1\n");
        else
            printf("%d\n", n - min(l + 1, n - r));
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
