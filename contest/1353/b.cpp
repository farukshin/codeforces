// https://codeforces.com/contest/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0;i < n;i++)
        cin >> v1[i];
    vector<int> v2(n);
    for (int i = 0;i < n;i++)
        cin >> v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.rbegin(), v2.rend());
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (i < k)
            ans += max(v1[i], v2[i]);
        else
            ans += v1[i];
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    //solve();
    int t; cin >> t; while (t--) solve();

    return 0;
}
