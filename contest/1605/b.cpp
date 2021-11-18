// https://codeforces.com/contest/1605/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s, s0;
    cin >> s;
    s0 = s;
    sort(begin(s0), end(s0));
    if (s0 == s)
    {
        cout << "0\n";
        return;
    }

    cout << "1\n";
    vector<int> ans;
    for (int i = 0; i < n; i++)
        if (s[i] != s0[i])
            ans.push_back(i);
    cout << ans.size() << " ";
    for (auto d : ans)
        cout << d + 1 << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
