// https://codeforces.com/contest/1511/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, ans = 0, cnt1 = 0, cnt2 = 0, cur;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cur;
        if (cur == 1)
            cnt1++, ans++;
        else if (cur == 2 && cnt1 > 0)
            cnt1--;
        else if (cur == 2)
            cnt2--;
        else if (cur == 3 && cnt1 >= 0)
            cnt1++, ans++;
        else if (cur == 3 && cnt2 >= 0)
            cnt2++, ans++;
        else if (cur == 3)
            cnt2--;
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
