// https://codeforces.com/contest/1328/problem/B
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
        int n, k;
        cin >> n >> k;

        string ans(n, 'a');
        for (int i = n - 2; i >= 0; i--)
        {
            if (k <= (n - i - 1))
            {
                ans[i] = 'b';
                ans[n - k] = 'b';
                cout << ans << endl;
                break;
            }
            k -= (n - i - 1);
        }
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
