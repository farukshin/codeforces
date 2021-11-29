// https://codeforces.com/contest/1574/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T>
inline void read(T &f)
{
    f = 0;
    T fu = 1;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        if (c == '-')
            fu = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        f = (f << 3) + (f << 1) + (c & 15);
        c = getchar();
    }
    f *= fu;
}

template <typename T>
void print(T x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x < 10)
        putchar(x + 48);
    else
        print(x / 10), putchar(x % 10 + 48);
}

template <typename T>
void print(T x, char t)
{
    print(x);
    putchar(t);
}

void solve()
{
    ll n, m;
    read(n);
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        read(v[i]);
        sum += v[i];
    }
    sort(begin(v), end(v));
    read(m);
    for (ll i = 0; i < m; i++)
    {
        ll a, b, ans = 0;
        read(a);
        read(b);
        auto it = lower_bound(begin(v), end(v), a);
        if (it == v.end())
            it--;
        ans = max(a - *it, 0ll) + max(0ll, b - (sum - (*it)));

        if (it != v.begin())
        {
            it--;
            ans = min(ans, max(a - *it, 0ll) + max(0ll, b - sum + *it));
        }
        print(ans, '\n');
    }
}

int main()
{
    solve();
    return 0;
}
