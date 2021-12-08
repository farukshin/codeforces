// https://codeforces.com/contest/1248/problem/E
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, p;
    cin >> n >> p;

    int ans[n];

    set<int> expect, queuePass;
    set<pair<int, int>> pas;
    int last_time = 0;

    for (int i = 0; i < p; i++)
    {
        int cur;
        cin >> cur;
        pas.insert({cur, i + 1});
    }

    while (!(pas.empty() && expect.empty() && queuePass.empty()))
    {
        ;
        // pass -> expect

        // expect -> queuePass

        // queuePass
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("e-input-1.txt", "r", stdin);
    //freopen("e-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
