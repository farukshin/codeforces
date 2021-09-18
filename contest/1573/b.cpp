// https://codeforces.com/contest/1573/problem/B //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    if(a[0] < b[0])
    {
        cout << 0 << "\n";
        return;
    }

    int ans1 = INT_MAX, ans2 = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < b[0] && ans1 == INT_MAX) ans1 = i;
        if(b[i] > a[0] && ans2 == INT_MAX) ans2 = i;
    }
    cout << min(min(ans1, ans2), n - 1) << "\n"; //todo dp
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
