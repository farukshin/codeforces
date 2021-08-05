// https://codeforces.com/contest/556/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(2, 0);
    for(auto ch : s)
        if(ch == '0' || ch == '1')
            v[(ch - '0')]++;

    cout << abs(v[0] - v[1]);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}