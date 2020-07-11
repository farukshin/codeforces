// https://codeforces.com/contest/1375/problem/A
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

        for (int i = 0; i < n; i++)
        {
            int cur;
            cin >> cur;
            if (i % 2 == 0 && cur < 0 || i % 2 == 1 && cur > 0)
                cout << -cur << " ";
            else
                cout << cur << " ";
        }
        cout << endl;
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
