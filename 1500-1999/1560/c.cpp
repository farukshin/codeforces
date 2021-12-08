// https://codeforces.com/contest/1560/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    if(n == 1)
    {
        cout << 1 << " " << 1 << "\n";
        return;
    }

    ll sm = 1, cur = 1, pos = 2;
    for(;; pos++)
    {
        cur += 2;
        sm += cur;
        if(sm >= n) break;
    }
    sm -= cur;
    n -= sm;

    if(n <= pos) cout << n << " " << pos << "\n";
    else
    {
        n -= pos;
        cout << pos << " " << pos - n << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
