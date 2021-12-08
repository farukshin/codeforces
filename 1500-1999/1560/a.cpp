// https://codeforces.com/contest/1560/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int k;
    cin >> k;
    int ans = 0;
    for(int i = 1;; i++)
    {
        if(i % 3 != 0 && i % 10 != 3) ans++;
        if(ans == k)
        {
            cout << i << "\n";
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
