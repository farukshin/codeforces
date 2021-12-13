// https://codeforces.com/contest/1591/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T>
struct BIT
{
    vector<T> v;
    int n;
    BIT(int n) : n(n), v(n) {}
    void add(int x, T val)
    {
        for (int i = x + 1; i <= n; i += i & -i)
            v[i - 1] += val;
    }
    T qry(int x)
    {
        T res = 0;
        for (int i = min(x + 1, n); i > 0; i -= i & -i)
            res += v[i - 1];
        return res;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;

    vector<int> vv = v;
    sort(begin(vv), end(vv));
    vv.resize(unique(begin(vv), end(vv)) - begin(vv));
    BIT<int> fen(vv.size());
    ll ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int pos = lower_bound(begin(vv), end(vv), v[i]) - begin(vv);
        ans += i - fen.qry(pos);
        fen.add(pos, 1);
    }
    cout << (ans % 2 == 0 || set<int>(begin(v), end(v)).size() != n ? "Yes" : "No") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
