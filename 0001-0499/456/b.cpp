// https://codeforces.com/contest/456/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int powmod(int num, int n, int mod)
{
    num %= mod;
    int ans = 1 % mod;
    while (n)
        if ((n & 1))
            n--, ans = (ans * num) % mod;
        else
            n >>= 1, num = (num * num) % mod;

    return ans;
}

int mPow(int num, string s, int mod)
{
    num %= mod;
    int res = 1, cur = num;
    for (int i = (int)s.size() - 1; i >= 0; i--)
    {
        res = (res * powmod(cur, s[i] - '0', mod)) % mod;
        cur = powmod(cur, 10, mod);
    }
    return res;
}

void solve()
{
    string s;
    cin >> s;

    const int MOD = 5;

    int ans = (mPow(1, s, MOD) + mPow(2, s, MOD) + mPow(3, s, MOD) + mPow(4, s, MOD)) % MOD;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
