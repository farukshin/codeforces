// https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << k + (k - 1) / (n - 1) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
