// https://codeforces.com/contest/1326/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n), a(n), x(n + 1, 0);
    for (auto &bb : b)
        cin >> bb;

    for (int i = 0; i < n; i++)
    {

        a[i] = b[i] + x[i];
        x[i + 1] = max(x[i], a[i]);
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
