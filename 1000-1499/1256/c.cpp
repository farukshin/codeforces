// https://codeforces.com/contest/1256/problem/C
// #tech_debt
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
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> c(m + 1);
    vector<int> road(n + 1);
    for (int i = 0; i < m; i++)
        cin >> c[i];

    bool success = true, onPlatf = false;
    int pos = 0, nPlatf = 0;
    int beginPlatf = 0, endPlatf = 0;

    do
    {
        if (pos + d >= n + 1) // можем прыгнуть на другой берег
            pos += d;
        else if (onPlatf && pos != endPlatf) // на платформе не на последнем месте
            pos = min(pos + d, endPlatf);
        else if (onPlatf && pos == endPlatf || !onPlatf) // на платформе на последнем месте или не на платформе
        {
            int freePlatf = m - nPlatf;
            cout << freePlatf << endl;

            if (freePlatf > 0)
            {
                nPlatf++;
                pos += d;
                // for (int i = pos; i <= pos + c[pos]; i++)
                //     road[i] = nPlatf;
            }
            else
                success = false;
        }

    }
    while (success && pos < n + 1);

    cout << (success ? "YES" : "NO") << endl;

    if (success)
        for (int i = 1; i <= n; i++)
            cout << road[i] << (i == n ? "\n" : " ");
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
