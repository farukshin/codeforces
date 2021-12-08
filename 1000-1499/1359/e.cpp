//https://codeforces.com/contest/1359/problem/E
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define forn(i, n) for (int i = 0; i < int(n); i++)

typedef long long ll;
typedef long double ld;

const int N = 5e5 + 5;
const int MOD = 998244353;

int fact[N];

int add(int x, int y)
{
    x += y;
    while (x >= MOD)
        x -= MOD;
    while (x < 0)
        x += MOD;
    return x;
}

int mul(int x, int y)
{
    return (x * 1ll * y) % MOD;
}

int binpow(int x, int y)
{
    int z = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
            z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

int inv(int x)
{
    return binpow(x, MOD - 2);
}

int divide(int x, int y)
{
    return mul(x, inv(y));
}

void precalc()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
        fact[i] = mul(i, fact[i - 1]);
}

int C(int n, int k)
{
    if (k > n)
        return 0;
    return divide(fact[n], mul(fact[n - k], fact[k]));
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    precalc();
    for (int i = 1; i <= n; i++)
    {
        int d = n / i;
        ans = add(ans, C(d - 1, k - 1));
    }
    cout << ans << endl;
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
