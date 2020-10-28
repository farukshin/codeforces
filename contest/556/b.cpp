// https://codeforces.com/contest/556/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, a;
    cin >> n >> a;

    int rot = n - a;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        a += ((i & 1) ? n - rot : rot);
        a %= n;
        if (a != i)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}