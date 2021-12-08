// https://codeforces.com/contest/1505/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    bool success = true;
    for (int i = 2; i < s.size(); i++)
    {
        int a = ((s[i - 2] - 'A') + (s[i - 1] - 'A')) % 26;
        int b = (s[i] - 'A');
        if (a != b)
            success = false;
    }
    cout << (success ? "YES" : "NO");
}

int main()
{
    solve();
    return 0;
}
