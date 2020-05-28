//https://codeforces.com/contest/1359/problem/C
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int getT(int n, int h, int c, int t)
{
    if (n % 2 == 0)
        return (h * n / 2 + c * n / 2) / n;
    else
        return (h * (n / 2 + 1) + c * n / 2) / n;
}

void solve()
{
    int n, h, c, t;
    cin >> n;

    while (n--)
    {
        int l = 1, r = 1000, cur, mid, preD;
        cin >> h >> c >> t;
        preD = getT(l, h, c, t);
        bool flag = false;
        while (!flag)
        {
            mid = (l + r) / 2;
            cur = getT(mid, h, c, t);
            if (cur < preD)
            {
                l = mid;
                preD = cur;
            }
            else
            {
                flag = true;
                r = mid;
            }
        }
        cout << l << endl;
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
