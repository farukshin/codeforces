// https://codeforces.com/contest/1257/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> v;

void solve()
{
    int n;
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = n + 1;
    vector<int> last(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        if (last[v[i]] != -1)
            ans = min(ans, i - last[v[i]] + 1);
        last[v[i]] = i;
    }

    cout << (ans > n ? -1 : ans) << endl;
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
    while (t--)
        solve();

    return 0;
}
