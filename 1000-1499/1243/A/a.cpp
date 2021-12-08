// https://codeforces.com/contest/1243/problem/A
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
    int k;
    cin >> k;

    while (k--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < n; i++)
            if (ans < min(i + 1, a[i]))
                ans = min(i + 1, a[i]);

        cout << ans << endl;
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
