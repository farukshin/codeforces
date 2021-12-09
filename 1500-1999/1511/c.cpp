// https://codeforces.com/contest/1511/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;

    for (int i = 0; i < q; i++)
    {
        int cur;
        cin >> cur;
        int pos = find(begin(v), end(v), cur) - begin(v);
        cout << pos + 1 << " ";
        rotate(begin(v), begin(v) + pos, begin(v) + pos + 1);
    }
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
