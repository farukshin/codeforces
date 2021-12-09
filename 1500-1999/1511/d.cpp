// https://codeforces.com/contest/1511/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s = "";
    for (int i = 0; i < k; i++)
    {
        s += 'a' + i;
        for (int j = i + 1; j < k; j++)
            s += 'a' + i, s += 'a' + j;
    }
    while (s.size() < n)
        s = s + s;
    cout << s.substr(0, n);
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
