// https://codeforces.com/contest/1294/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void minDivisor(int &n, set<int> &ans)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0 && !ans.count(i))
        {
            ans.insert(i);
            n /= i;
            break;
        }
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        set<int> ans;

        minDivisor(n, ans);
        minDivisor(n, ans);

        if (ans.size() < 2 || ans.count(n) || n == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        ans.insert(n);
        for (auto res : ans)
            cout << res << " ";
        cout << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
