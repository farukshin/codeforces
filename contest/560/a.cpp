// https://codeforces.com/contest/560/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    bool fl = false;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur == 1)
            fl = true;
    }
    cout << (fl ? -1 : 1) << endl;
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
