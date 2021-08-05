// https://codeforces.com/contest/1554/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    ++m;
    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i & 1) == (m >> i & 1))
            continue;
        if( (n >> i & 1) > (m >> i & 1))
            break;
        ans |= 1 << i;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
