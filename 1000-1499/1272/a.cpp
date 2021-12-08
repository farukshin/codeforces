// https://codeforces.com/contest/1272/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int dist(int a, int b, int c)
{
    return abs(a - b) + abs(a - c) + abs(b - c);
}

void solve()
{
    int q;
    cin >> q;

    int d[3] = {-1, 0, +1};

    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = dist(a, b, c);
        for (int da : d)
            for (int db : d)
                for (int dc : d)
                    ans = min(ans, dist(a + da, b + db, c + dc));
        cout << ans << endl;
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
