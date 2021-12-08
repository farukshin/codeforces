// https://codeforces.com/contest/1509/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur % 2)
            a.push_back(cur);
        else
            b.push_back(cur);
    }
    if (a.size())
        for (auto d : a)
            cout << d << " ";
    for (auto d : b)
        cout << d << " ";
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
