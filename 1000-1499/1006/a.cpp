// https://codeforces.com/contest/1006/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        cout << (cur & 1 ? cur : cur - 1) << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
