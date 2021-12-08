// https://codeforces.com/contest/1011/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    bool succes = true;
    for(auto &cur : a) cin >> cur, succes &= (cur != 1);
    for(auto &cur : b) cin >> cur, succes &= (cur != 1);

    if(!succes)
    {
        cout << -1;
        return;
    }

    ld ans = m;
    ans += ans / (a[0] - 1);
    for(int i = n - 1; i >= 1; i--)
    {
        ans += ans / (b[i] - 1);
        ans += ans / (a[i] - 1);
    }
    ans += ans / (b[0] - 1);
    ans -= m;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
