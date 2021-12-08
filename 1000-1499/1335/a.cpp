// https://codeforces.com/contest/1335/problem/A
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
        int n;
        cin >> n;
        int ans;

        if (n % 2 == 1)
            ans = n / 2;
        else
            ans = (n - 1) / 2;

        cout << ans << endl;
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
