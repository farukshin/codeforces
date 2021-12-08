// https://codeforces.com/contest/1216/problem/B
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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        v[i] = {cur, i + 1};
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    int ans = 0;

    for (int i = 0; i < n; i++)
        ans += i * v[i].first + 1;

    cout << ans << endl;
    for (int i = 0; i < n; i++)
        cout << v[i].second << (i == (n - 1) ? '\n' : ' ');
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
