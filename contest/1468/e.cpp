// https://codeforces.com/contest/1468/problem/E
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> v(4);
    for(int i = 0; i < 4; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[0]*v[2] << "\n";
}

int main()
{
    //solve();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}