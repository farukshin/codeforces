// https://codeforces.com/contest/998/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;
    int cnt = (v[0] & 1 ? 1 : -1);
    vector<int> r;
    for (int i = 0; i < n - 1; i++)
    {
        if (cnt == 0)
            r.push_back(abs(v[i + 1] - v[i]));
        cnt += (v[i + 1] & 1 ? 1 : -1);
    }
    sort(begin(r), end(r));
    int ans = 0;
    for (int i = 0; i < r.size(); i++)
        if (sum >= r[i])
            ans++, sum -= r[i];
        else
            break;
    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}
