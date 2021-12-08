// https://codeforces.com/contest/1343/problem/A
#include <bits/stdc++.h>
using namespace std;

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
        for (int st = 2; st < 30; st++)
        {
            int val = (1 << st) - 1;
            if (n % val == 0)
            {
                cout << n / val << endl;
                break;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();
    return 0;
}
